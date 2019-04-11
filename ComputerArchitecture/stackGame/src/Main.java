import java.util.Scanner;
import java.util.Stack;

public class Main {
    // config
    public static final int SEC_TICK_REMOVE = 2;
    public static final int COUNT_SIZE_TO_WIN = 10;
    public static boolean debug = true;
    //

    public static boolean gameStarted = false;

    static Stack<Integer> stack = new Stack<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Ваша задача по порядку написать числа от 1 до " + COUNT_SIZE_TO_WIN + " так, чтобы не сбиться со счета.");
        System.out.println("Раз в " + SEC_TICK_REMOVE + " сек. компьютер будет удалять последнее введенное число.");

        while(true) {
            int num;
            try {
                num = sc.nextInt();
            } catch(Exception e) {
                System.out.println("Введите число");
                sc.next();
                continue;
            }

            if(stack.empty() && num != 1) {
                System.out.println("Первое число должно быть единицей.");
                continue;
            }
            if(!stack.empty() && num - 1 != stack.lastElement()) {
                System.out.println("Число введено неверно.");
                continue;
            }

            stack.push(num);
            if(debug) System.out.println(stack);

            if(stack.size() >= COUNT_SIZE_TO_WIN) {
                System.out.println("Вы выиграли!");
                System.exit(0);
                return;
            }

            if(!gameStarted) {
                gameStarted = true;
                new Thread(() -> {
                    while(gameStarted) {
                        try {
                            Thread.sleep(SEC_TICK_REMOVE * 1000);
                        } catch(InterruptedException e) {
                            return;
                        }

                        stack.pop();
                        System.out.println(stack);

                        if(stack.empty()) {
                            if(debug) System.out.println("Вы проиграли! Компьютер удалил весь стек...");
                            gameStarted = false;
                            System.exit(0);
                            return;
                        }
                    }
                }).start();
            }
        }
    }

}

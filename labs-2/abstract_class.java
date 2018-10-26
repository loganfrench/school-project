import java.io.IOException;
import java.net.ServerSocket;
import java.net.Socket;

abstract class Book {
	String hash;
	String author;
	String name;
	int year;
	String office;
	
	public Book(String hash, String author, String name, int year, String office) {
		super();
		this.hash = hash;
		this.author = author;
		this.name = name;
		this.year = year;
		this.office = office;
	}
}

class Directory extends Book {
	public Directory(String hash, String author, String name, int year, String office) {
		super(hash, author, name, year, office);
	}
	
	public String toString() {
		return 
			"HASH: " + this.hash + "\n" + 
			"Author: " + this.author + "\n" + 
			"Name: " + this.name + "\n" + 
			"Year: " + this.year + "\n" + 
			"Office: " + this.office + "\n" +
			"";
	}
}

class Encyclopedia extends Book {
	public Encyclopedia(String hash, String author, String name, int year, String office) {
		super(hash, author, name, year, office);
	}
	
	public String toString() {
		return 
			"HASH: " + this.hash + "\n" + 
			"Author: " + this.author + "\n" + 
			"Name: " + this.name + "\n" + 
			"Year: " + this.year + "\n" + 
			"Office: " + this.office + "\n" +
			"";
	}
}

public class Main {
	public static void main(String[] args) {
		Directory bk1 = new Directory(
			"hash", 
			"Azizov Timur", 
			"gvn", 
			2007, 
			"Azizov Publishing house"
		);
		
		System.out.println(bk1);
	}
}
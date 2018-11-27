package sample;

public class User {

    private int id;
    private String from;
    private String to;
    private String date;
    private int duration;

    public User(int id, String from, String to, String date, int duration) {
        this.id = id;
        this.from = from;
        this.to = to;
        this.date = date;
        this.duration = duration;
    }

    public User() {
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getFrom() {
        return from;
    }

    public void setFrom(String from) {
        this.from = from;
    }

    public String getTo() {
        return to;
    }

    public void setTo(String to) {
        this.to = to;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

    public int getDuration() {
        return duration;
    }

    public void setDuration(int duration) {
        this.duration = duration;
    }
}
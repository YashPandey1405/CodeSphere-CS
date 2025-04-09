public class MarksBean {
    private int mark1, mark2, mark3, mark4, mark5 , mark6;

    // Getters and Setters
    public int getMark1() { return mark1; }
    public void setMark1(int mark1) { this.mark1 = mark1; }

    public int getMark2() { return mark2; }
    public void setMark2(int mark2) { this.mark2 = mark2; }

    public int getMark3() { return mark3; }
    public void setMark3(int mark3) { this.mark3 = mark3; }

    public int getMark4() { return mark4; }
    public void setMark4(int mark4) { this.mark4 = mark4; }

    public int getMark5() { return mark5; }
    public void setMark5(int mark5) { this.mark5 = mark5; }
    
    public int getMark6() { return mark6; }
    public void setMark6(int mark6) { this.mark6 = mark6; }

    // Business Logic
    public int getTotal() {
        return mark1 + mark2 + mark3 + mark4 + mark5 + mark6;
    }

    public double getAverage() {
        return getTotal() / 5.0;
    }

    public String getGrade() {
        double avg = getAverage();
        if (avg >= 90) return "A";
        else if (avg >= 75) return "B";
        else if (avg >= 60) return "C";
        else if (avg >= 40) return "D";
        else return "F";
    }
}

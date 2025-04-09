public class InterestBean {
    private double principal;
    private double rate;
    private double time;

    // Setters and Getters
    public double getPrincipal() {
        return principal;
    }

    public void setPrincipal(double principal) {
        this.principal = principal;
    }

    public double getRate() {
        return rate;
    }

    public void setRate(double rate) {
        this.rate = rate;
    }

    public double getTime() {
        return time;
    }

    public void setTime(double time) {
        this.time = time;
    }

    // Business logic: Simple Interest calculation
    public double calculateInterest() {
        return (principal * rate * time) / 100;
    }
}

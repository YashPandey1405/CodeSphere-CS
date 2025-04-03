import javax.servlet.jsp.tagext.*;
import javax.servlet.jsp.*;
import java.io.*;

public class DiscountTagHandler extends SimpleTagSupport {
    private double price;

    public void setPrice(double price) { this.price = price; }

    public void doTag() throws JspException, IOException {
        JspWriter out = getJspContext().getOut();
        out.print(price * 0.9); // 10% discount
    }
}

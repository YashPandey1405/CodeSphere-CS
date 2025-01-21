class Box {
    int Height;
    int Width;
    int Depth;

    public Box(int h, int w, int d) {
        this.Height = h;
        this.Width = w;
        this.Depth = d;
    }

    int Volume() {
        return (Height * Width * Depth);
    }
}

public class Prog17 {
    public static void main(String args[]) {
        Box Square = new Box(5, 8, 10);
        int ans = Square.Volume();
        System.out.println("THE AREA OF THE SQUARE IS ::: " + ans);
    }
}
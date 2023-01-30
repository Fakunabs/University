class Point {
    private final double x;
    private final double y;

    Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }
}

class Square {
    private final double width;

    Square(double width) {
        this.width = width;
    }

    double getWidth() {
        return width;
    }
}

class Rectangle extends Square {
    private final double length;

    Rectangle(double width, double length) {
// Truyền giá trị tham số width parameter vào lớp Square để khởi tạo đối tượng

        super(width);
        this.length = length;
    }

    double getLength() {
        return length;
    }
}

class Shapes {
    public static void main(String[] args) {
        Square s = new Square(100);
        System.out.println("s.width = " + s.getWidth());
        Rectangle r = new Rectangle(50, 25);
        System.out.println("r.width = " + r.getWidth());
        System.out.println("r.length = " + r.getLength());
    }
}

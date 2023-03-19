//package BaiTap3;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JFrame;

public class BaiTap3 extends JFrame {
    public static void main(String[] args) {
        new BaiTap3();
    }

    public BaiTap3() {
        this.setSize(400, 300);
        this.setDefaultCloseOperation(3);
        this.setTitle("Quốc kì Việt Nam");
        this.setVisible(true);
    }

    public void paint(Graphics g) {
        g.setColor(Color.WHITE);
        g.fillRect(0, 0, this.getWidth(), this.getHeight());
        int xobj = 0, yobj = 0, a = this.getWidth();
        g.setColor(Color.red);
        g.fillRect(xobj, yobj, a, 2 * a / 3);
        double r = a / 5;
        double r1 = r * Math.sin(Math.PI / 10) / Math.sin(Math.PI * 126 / 180);
        double x0 = xobj + a / 2, y0 = yobj + a / 3;
        int[] x = new int[10];
        int[] y = new int[10];
        for (int i = 0; i < 5; i++) {
            x[i * 2] = (int) (x0 + r1 * Math.cos(i * 2 * Math.PI / 5 + Math.PI / 2));
            y[i * 2] = (int) (y0 + r1 * Math.sin(i * 2 * Math.PI / 5 + Math.PI / 2));
        }

        for (int i = 0; i < 5; i++) {
            x[i * 2 + 1] = (int) (x0 + r * Math.cos(i * 2 * Math.PI / 5 + Math.PI / 2 + Math.PI / 5));
            y[i * 2 + 1] = (int) (y0 + r * Math.sin(i * 2 * Math.PI / 5 + Math.PI / 2 + Math.PI / 5));
        }
        g.setColor(Color.YELLOW);
        g.fillPolygon(x, y, 10);
    }
}


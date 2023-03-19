import java.awt.Color;
import java.awt.Graphics;
import java.awt.image.BufferedImage;
import java.util.Random;

import javax.swing.JFrame;

public class GameBiA extends JFrame{
    public static void main(String[] args) {
        new GameBiA();
    }
    int w = 400, h = 300;
    int of = 50;
    BufferedImage img;
    Graphics g;
    Ball b,b1;
    private int ball1X, ball1Y, ball1DX, ball1DY;
    private int ball2X, ball2Y, ball2DX, ball2DY;
    public GameBiA() {
        this.setSize(w+2*of, h+2*of);
        this.setDefaultCloseOperation(3);

        img = new BufferedImage(w+2*of, h+2*of, 2);
        g = img.getGraphics();



        b = new Ball(this,100,100,10,12.5,20);
        b.start();
        b1 = new Ball(this,225,20,10,12.5,20);
        b1.start();
        this.setVisible(true);
    }

    public void paint(Graphics g1) {
        g.setColor(Color.WHITE);
        g.fillRect(0, 0, getWidth(), getHeight());

        g.setColor(Color.BLUE);
        g.fillRect(of, of, w, h);

        int x = (int)b.x;
        int y = (int)b.y;
        int r = (int)b.r;
        g.setColor(Color.YELLOW);
        g.fillOval(of+x-r, of+y-r, r*2, r*2);
        g.setColor(Color.BLACK);
        g.drawOval(of+x-r, of+y-r, r*2, r*2);

        int x1 = (int)b1.x;
        int y1 = (int)b1.y;
        int r1 = (int)b1.r;
        g.setColor(Color.YELLOW);
        g.fillOval(of+x1-r1, of+y1-r1, r1*2, r1*2);
        g.setColor(Color.BLACK);
        g.drawOval(of+x1-r1, of+y1-r1, r1*2, r1*2);

        g1.drawImage(img, 0, 0, null);
        this.repaint();
    }
}

class Ball extends Thread{
    GameBiA table;
    double x,y,vx,vy,r;
    public Ball(GameBiA table, double x, double y, double vx, double vy, double r) {
        super();
        this.table = table;
        this.x = x;
        this.y = y;
        this.vx = vx;
        this.vy = vy;
        this.r = r;
    }

    public void run() {
        while(true) {
            //Chuyen dong
            x += vx;
            y += vy;

            //Va cham tuong
            if(vx<0 && x-r<=0) vx = -vx;
            if(vx>0 && x+r>=table.w) vx = -vx;
            if(vy<0 && y-r<=0) vy = -vy;
            if(vy>0 && y+r>=table.h) vy = -vy;
            if(Math.abs(vx) > 0 && Math.abs(vy) > 0)
            {
                if(vx > 0)
                    vx -= 0.04;
                if(vx < 0)
                    vx += 0.04;
                if(vy > 0)
                    vy -= 0.05;
                if(vy < 0)
                    vy += 0.05;
            }
            try {
                Thread.sleep(30);
            } catch (Exception e) {
                // TODO: handle exception
            }
        }
    }
}
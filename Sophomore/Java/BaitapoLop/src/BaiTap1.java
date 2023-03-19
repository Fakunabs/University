
//package BaiTap1;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class BaiTap1 extends JFrame {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Bai tap 1");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new FlowLayout());
        JButton btnGreen = new JButton("Green");
        JButton btnBlue = new JButton("Blue");
        JButton btnRed = new JButton("Red");
        JButton btnExit = new JButton("Exit");
        frame.add(btnGreen);
        frame.add(btnBlue);
        frame.add(btnRed);
        frame.add(btnExit);
        frame.setVisible(true);
        btnGreen.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.getContentPane().setBackground(Color.GREEN);
            }
        });
        btnBlue.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.getContentPane().setBackground(Color.BLUE);
            }
        });
        btnRed.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                frame.getContentPane().setBackground(Color.RED);
            }
        });

        btnExit.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.exit(0);
            }
        });
    }

}

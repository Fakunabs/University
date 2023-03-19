import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class BaiTap2 extends JFrame {
    public static void main(String[] args) {
        new TinhToan();
    }

    public static class TinhToan extends JFrame {

        public TinhToan() {
            JFrame frame = new JFrame("Bai tap 2");
            frame.setSize(400, 400);
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            frame.setLayout(new FlowLayout());
            JLabel lblA = new JLabel("Nhap a: ");
            JLabel lblB = new JLabel("Nhap b: ");
            JLabel lblKetQua = new JLabel("Ket qua: ");
            JTextField txtA = new JTextField(10);
            JTextField txtB = new JTextField(10);
            JTextField txtKetQua = new JTextField(10);
            JButton btnCong = new JButton("Cong");
            JButton btnTru = new JButton("Tru");
            JButton btnNhan = new JButton("Nhan");
            JButton btnChia = new JButton("Chia");
            JButton btnReset = new JButton("Reset");
            JButton btnExit = new JButton("Exit");
            frame.add(lblA);
            frame.add(txtA);
            frame.add(lblB);
            frame.add(txtB);
            frame.add(lblKetQua);
            frame.add(txtKetQua);
            frame.add(btnCong);
            frame.add(btnTru);
            frame.add(btnNhan);
            frame.add(btnChia);
            frame.add(btnReset);
            frame.add(btnExit);
            frame.setVisible(true);
            btnCong.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    int a = Integer.parseInt(txtA.getText());
                    int b = Integer.parseInt(txtB.getText());
                    int ketQua = a + b;
                    txtKetQua.setText(String.valueOf(ketQua));
                }
            });
            btnTru.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    int a = Integer.parseInt(txtA.getText());
                    int b = Integer.parseInt(txtB.getText());
                    int ketQua = a - b;
                    txtKetQua.setText(String.valueOf(ketQua));
                }
            });
            btnNhan.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    int a = Integer.parseInt(txtA.getText());
                    int b = Integer.parseInt(txtB.getText());
                    int ketQua = a * b;
                    txtKetQua.setText(String.valueOf(ketQua));
                }
            });
            btnChia.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    int a = Integer.parseInt(txtA.getText());
                    int b = Integer.parseInt(txtB.getText());
                    int ketQua = a / b;
                    txtKetQua.setText(String.valueOf(ketQua));
                }
            });

            btnReset.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    txtA.setText("");
                    txtB.setText("");
                    txtKetQua.setText("");
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
}



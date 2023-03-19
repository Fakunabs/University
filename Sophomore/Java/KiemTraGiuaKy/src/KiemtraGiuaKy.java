
   // xây dựng giao diện gồm 2 bên trái phải
   // bên trái gồm các nút màu xanh bao gồm Rand Oval, Rand Rect, và Nút Check
   // Bên trái cũng bao gồm các textfield của Rand Oval và Rand Rect và của nút check
   // Bên phải là JPanel có tên là DrawPanel
   // Nếu bấm vào nút Rand Oval thì vẽ ngẫu nhiên n hinhf tròn với bán kính ngẫu nhiên trên JPanel, với n là số được nhập vào từ ô bên phải nút bấm

   // Nếu bấm vào nút Rand Rect thì vẽ ngẫu nhiên m hình vuông với chiều dài cạnh ngẫu nhiên trên JPanel, với m là số được nhập vào từ ô bên phải nút bấm

   // Nếu bấm vào nút Check thì kiểm tra xem có viền ngoài của hình tròn nào giao với viền ngoài của hình vuông nào đó hay không ? Nếu có thì trả về true còn ngược lại thì trả về false

   // Nếu bấm vào nút exit thì kết thúc chương trình

   // CÓ sử lý biệt lệ đầy đủ


import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.Random;
public class KiemtraGiuaKy extends JFrame implements ActionListener {
    private JTextField ovalTextField, rectTextField, checkTextField;
    private JButton randOvalButton, randRectButton, checkButton, exitButton;
    private JPanel drawPanel;

    public KiemtraGiuaKy() {
        // Set up the main frame
        setTitle("Draw Shapes");
        setSize(800, 600);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create the left panel with buttons and text fields
        JPanel leftPanel = new JPanel(new GridLayout(5, 2, 5, 5));
        leftPanel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));
        randOvalButton = new JButton("Rand Oval");
        randOvalButton.addActionListener(this);
        leftPanel.add(randOvalButton);
        ovalTextField = new JTextField("5");
        leftPanel.add(ovalTextField);
        randRectButton = new JButton("Rand Rect");
        randRectButton.addActionListener(this);
        leftPanel.add(randRectButton);
        rectTextField = new JTextField("5");
        leftPanel.add(rectTextField);
        checkButton = new JButton("Check");
        checkButton.addActionListener(this);
        leftPanel.add(checkButton);
        checkTextField = new JTextField("true");
        leftPanel.add(checkTextField);

        leftPanel.add(new JLabel()); // Placeholder
        exitButton = new JButton("Exit");
        exitButton.addActionListener(this);
        leftPanel.add(exitButton);


        // Create the right panel for drawing
        drawPanel = new JPanel() {
            @Override
            public void paintComponent(Graphics g) {
                super.paintComponent(g);
                // TODO: draw shapes here
            }
        };
        drawPanel.setBackground(Color.WHITE);

        // Add the panels to the main frame
        setLayout(new BorderLayout());
        add(leftPanel, BorderLayout.WEST);
        add(drawPanel, BorderLayout.CENTER);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == randOvalButton) {
            try {
                int n = Integer.parseInt(ovalTextField.getText());
                Random rand = new Random();
                Graphics g = drawPanel.getGraphics();
                for (int i = 0; i < n; i++) {
                    int x = rand.nextInt(drawPanel.getWidth());
                    int y = rand.nextInt(drawPanel.getHeight());
                    int r = rand.nextInt(Math.min(drawPanel.getWidth(), drawPanel.getHeight())) / 2;
                    g.drawOval(x - r, y - r, r * 2, r * 2);
                }
            } catch (NumberFormatException ex) {
                JOptionPane.showMessageDialog(this, "Invalid number format for ovalTextField");
            }
        } else if (e.getSource() == randRectButton) {
            int numRects = Integer.parseInt(rectTextField.getText());
            Random rand = new Random();
            Graphics g = drawPanel.getGraphics();
            g.setColor(Color.BLUE);
            for (int i = 0; i < numRects; i++) {
                int x = rand.nextInt(drawPanel.getWidth());
                int y = rand.nextInt(drawPanel.getHeight());
                int w = rand.nextInt(Math.min(drawPanel.getWidth(), drawPanel.getHeight()));
                int h = rand.nextInt(Math.min(drawPanel.getWidth(), drawPanel.getHeight()));
                g.drawRect(x, y, w, h);
            }
        } else if (e.getSource() == checkButton) {
//            boolean intersect = false;
//            Component[] components = drawPanel.getComponents();
//            for (int i = 0; i < components.length; i++) {
//                if (components[i] instanceof Rectangle) {
//                    Rectangle rect1 = (Rectangle) components[i];
//                    for (int j = i + 1; j < components.length; j++) {
//                        if (components[j] instanceof Ellipse2D) {
//                            Ellipse2D oval1 = (Ellipse2D) components[j];
//                            if (oval1.intersects(rect1)) {
//                                intersect = true;
//                                break;
//                            }
//                        }
//                    }
//                } else if (components[i] instanceof Ellipse2D) {
//                    Ellipse2D oval1 = (Ellipse2D) components[i];
//                    for (int j = i + 1; j < components.length; j++) {
//                        if (components[j] instanceof Rectangle) {
//                            Rectangle rect1 = (Rectangle) components[j];
//                            if (oval1.intersects(rect1)) {
//                                intersect = true;
//                                break;
//                            }
//                        }
//                    }
//                }
//                if (intersect) {
//                    break;
//                }
//            }
//            checkTextField.setText(Boolean.toString(intersect));
        } else if (e.getSource() == exitButton) {
            System.exit(0);
        }
    }




    public static void main(String[] args) {
        KiemtraGiuaKy frame = new KiemtraGiuaKy();
        frame.setVisible(true);
    }
}


import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        /*
        Cho chuỗi s = “AABBAA”, chuỗi này có độ dài palindrome là 6
        Chuỗi S1 = “AABBCBAA”, chuỗi này có độ dài palindrome là 7, lấy ra từ nó là “AABCBAA” hoặc “AABBBAA”
        Định nghĩa: Palindrome của chuỗi s là một số kí tự lấy từ chuỗi s, giữ nguyên vị trí và nó là chuối đối xứng.
        Input
        - Một dòng duy nhất gồm chuỗi s, độ dài không vượt quá 20 kí tự, bao gồm các kí tự chữ cái tiếng Anh
        in hoa
        Output
        - Đưa ra độ dài lớn nhất palindrome của chuỗi đó
        Examples
        standard input
        AABBAA
        standard output
        6
        standard input
        AABBCBAA
        standard output
        7
        */
//        Scanner scanner = new Scanner(System.in);
//        String s = scanner.nextLine();
//        int max = 0;
//        for (int i = 0; i < s.length(); i++) {
//            for (int j = i + 1; j < s.length(); j++) {
//                if (s.charAt(i) == s.charAt(j)) {
//                    int k = 0;
//                    while (i - k >= 0 && j + k < s.length() && s.charAt(i - k) == s.charAt(j + k)) {
//                        k++;
//                    }
//                    if (2 * k - 1 > max) {
//                        max = 2 * k - 1;
//                    }
//                }
//            }
//        }
//        System.out.println(max);
        // Code above wrong output
        // Output must be 6 with the input is AABBAA
        // Output must be 7 with the input is AABBCBAA
        // Pls recode
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int max = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i + 1; j < s.length(); j++) {
                if (s.charAt(i) == s.charAt(j)) {
                    int k = 0;
                    while (i - k >= 0 && j + k < s.length() && s.charAt(i - k) == s.charAt(j + k)) {
                        k++;
                    }
                    if (2 * k > max) {
                        max = 2 * k;
                    }
                }
            }
        }
        System.out.println(max);
    }
}

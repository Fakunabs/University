
pa
public class Bank {
    int nganKho = 10000;

    public static void main(String[] args) {
        new BankSystem();
    }
    public BankSystem() {
        ATM a1 = new ATM(this, "Lien Chieu");
        a1.run();
        ATM a2 = new ATM(this, "Hai Chau");
        a2.run();
    }
}
class ATM extends Thread {
    Bank bank;
    String name;
    public ATM(Bank bank, String name) {
        this.bank = bank;
        this.name = name;
    }
    public void run() {
       for (int i = 0; i < 100; i++)
       {
           bank.nganKho -= 10;
       }
    }
}

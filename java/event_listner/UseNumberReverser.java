import usercreatedpackage.NumberReverser;

public class UseNumberReverser {
    public static void main(String[] args) {
        int number = 12345;
        int reversedNumber = NumberReverser.reverseNumber(number);
        System.out.println("Original number: " + number);
        System.out.println("Reversed number: " + reversedNumber);
    }
}


 import java.io.*;

public class awtentyseven {
    public static void main(String[] args) {
        // Create an array of student objects
        Student[] students = new Student[15];

        // Populate the array with sample student data
        students[0] = new Student(1, "John Doe", "123 Main St", 85.5);
        students[1] = new Student(2, "Jane Smith", "456 Elm St", 78.9);
        // Add more students as needed

        // Write student information to a file
        try {
            FileWriter writer = new FileWriter("student_info.txt");
            for (Student student : students) {
                if (student != null) { // Check if the student object is not null
                    writer.write(student.toString() + "\n");
                }
            }
            writer.close();
            System.out.println("Student information written to file successfully.");
        } catch (IOException e) {
            System.out.println("An error occurred while writing to the file.");
            e.printStackTrace();
        }

        // Read student information from the file and display in Text Area
        try {
            FileReader reader = new FileReader("student_info.txt");
            BufferedReader bufferedReader = new BufferedReader(reader);
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                // Display student information in the console
                System.out.println(line);
            }
            reader.close();
        } catch (FileNotFoundException e) {
            System.out.println("The file does not exist or could not be found.");
            e.printStackTrace();
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file.");
            e.printStackTrace();
        }
    }
}

class Student {
    int rollNo;
    String name;
    String address;
    double result;

    public Student(int rollNo, String name, String address, double result) {
        this.rollNo = rollNo;
        this.name = name;
        this.address = address;
        this.result = result;
    }

    @Override
    public String toString() {
        return "Roll No: " + rollNo + ", Name: " + name + ", Address: " + address + ", Result: " + result;
    }
}
// import javax.swing.*;
// import java.awt.*;

// public class CircleCanvasGridLayout extends JFrame {
//     public CircleCanvasGridLayout() {
//         setTitle("Circle Canvas GridLayout");
//         setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

//         // Create a panel with GridLayout
//         JPanel panel = new JPanel(new GridLayout(2, 2));

//         // Add instances of CircleCanvas to the panel
//         panel.add(new CircleCanvas());
//         panel.add(new CircleCanvas());
//         panel.add(new CircleCanvas());
//         panel.add(new CircleCanvas());

//         // Add the panel to the frame
//         add(panel);

//         pack(); // Adjust the frame size
//         setLocationRelativeTo(null); // Center the frame
//     }

//     public static void main(String[] args) {
//         SwingUtilities.invokeLater(() -> {
//             CircleCanvasGridLayout frame = new CircleCanvasGridLayout();
//             frame.setVisible(true);
//         });
//     }
// }

// class CircleCanvas extends JPanel {
//     @Override
//     protected void paintComponent(Graphics g) {
//         super.paintComponent(g);
//         int width = getWidth();
//         int height = getHeight();
//         int diameter = Math.min(width, height);
//         int x = (width - diameter) / 2;
//         int y = (height - diameter) / 2;
//         g.setColor(Color.RED);
//         g.fillOval(x, y, diameter, diameter);
//     }

//     @Override
//     public Dimension getPreferredSize() {
//         return new Dimension(100, 100); // Set preferred size for the canvas
//     }
// }

import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.layout.GridPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.stage.Stage;

public class CircleCanvasGridLayout extends Application {

    @Override
    public void start(Stage primaryStage) {
        GridPane gridPane = new GridPane();
        gridPane.setAlignment(Pos.CENTER);
        gridPane.setHgap(10);
        gridPane.setVgap(10);

        for (int i = 0; i < 4; i++) {
            Circle circle = new Circle(50, Color.RED);
            gridPane.add(circle, i % 2, i / 2);
        }

        Scene scene = new Scene(gridPane, 300, 200);
        primaryStage.setScene(scene);
        primaryStage.setTitle("Circle Canvas GridLayout");
        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}

package com.example.java;

import com.example.java.Stack.Solution1;
import com.example.java.Stack.Solution2;
import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.IOException;

public class HelloApplication extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(HelloApplication.class.getResource("hello-view.fxml"));
        Scene scene = new Scene(fxmlLoader.load(), 320, 240);
        stage.setTitle("Hello!");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        //System.out.println(Solution1.maxDepth("((5/((6+7)-3)*5)+((8-9)/2)/2*((6+8)+9)+9)"));

        int[] tickets = {5,1,1,1};
        System.out.println(Solution2.timeRequiredToBy(tickets,0));
    }
}
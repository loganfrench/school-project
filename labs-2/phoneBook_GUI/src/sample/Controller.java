package sample;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;

public class Controller {

    private ObservableList<User> usersData = FXCollections.observableArrayList();

    @FXML
    private TableView<User> tableUsers;

    @FXML
    private TableColumn<User, Integer> idColumn;

    @FXML
    private TableColumn<User, String> fromColumn;

    @FXML
    private TableColumn<User, String> toColumn;

    @FXML
    private TableColumn<User, String> dateColumn;

    @FXML
    private TableColumn<User, Integer> durationColumn;


    @FXML
    private void initialize() {
        initData();

        idColumn.setCellValueFactory(new PropertyValueFactory<>("id"));
        fromColumn.setCellValueFactory(new PropertyValueFactory<>("from"));
        toColumn.setCellValueFactory(new PropertyValueFactory<>("to"));
        dateColumn.setCellValueFactory(new PropertyValueFactory<>("date"));
        durationColumn.setCellValueFactory(new PropertyValueFactory<>("duration"));

        tableUsers.setItems(usersData);
    }

    private void initData() {
        usersData.add(new User(1, "Anton", "Kostya", "10.11.12 13:14:15", 54));
        usersData.add(new User(2, "Dmitry", "Alexander", "11.11.11 11:11:11", 355));
        usersData.add(new User(3, "Michael", "Victoria", "07.08.99 02:09:59", 355));
    }

}
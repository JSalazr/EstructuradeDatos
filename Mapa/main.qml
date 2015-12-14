import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2

ApplicationWindow {
    title: qsTr("Hello World")
    width: 900
    height: 1000
    visible: true

    menuBar: MenuBar {
        Menu {
            title: qsTr("&File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered: messageDialog.show(qsTr("Open action triggered"));
            }
            MenuItem {
                text: qsTr("E&xit")
                onTriggered: Qt.quit();
            }
        }
    }

    Rectangle {
    id: root

    width: 360
    height: 360

    property variant win;  // you can hold this as a reference..

    Text {
        text: "Click here to open new window!"
        anchors.centerIn: parent
    }


    MouseArea {
        anchors.fill: parent
        onClicked: {
            var component = Qt.createComponent("QML/Dijkstra.qml");
            component.createObject(root).show();
        }
    }

    MainForm {
        transformOrigin: Item.Center
        anchors.rightMargin: -185
        anchors.bottomMargin: -362
        anchors.leftMargin: -172
        anchors.topMargin: 0
        anchors.fill: parent
        button1.onClicked:{
            var dijkstra = Qt.createComponent("Dijkstra.qml")
            dijkstra.show()
        }

        button2.onClicked: messageDialog.show(qsTr("Button 2 pressed"))
        button3.onClicked: messageDialog.show(qsTr("Button 3 pressed"))
        button4.onClicked: messageDialog.show(qsTr("Button 4 pressed"))
    }

    MessageDialog {
        id: messageDialog
        title: qsTr("May I have your attention, please?")

        function show(caption) {
            messageDialog.text = caption;
            messageDialog.open();
        }
    }
}
}

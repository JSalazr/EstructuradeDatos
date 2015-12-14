import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Layouts 1.1

Item {
    id: item1
    width: 900
    height: 1000

    property alias button4: button4
    property alias button3: button3
    property alias button2: button2
    property alias button1: button1

    RowLayout {
        width: 677
        height: 27
        anchors.verticalCenterOffset: -500
        anchors.horizontalCenterOffset: 33
        anchors.centerIn: parent

        Button {
            id: button1
            x: 0
            y: -200
            text: qsTr("Dijkstra")
        }

        Button {
            id: button2
            y: -200
            text: qsTr("Prim")
        }

        Button {
            id: button3
            y: -200
            text: qsTr("Floyd")
        }

        Button {
            id: button4
            x: 267
            y: 0
            text: qsTr("Kruskal")
        }
    }

    Image {
        id: image1
        y: -60
        width: 895
        height: 900
        anchors.left: parent.left
        anchors.leftMargin: 175
        enabled: true
        fillMode: Image.PreserveAspectFit
        clip: true
        source: "Aq6M22ZCSVl418kNFwTmY5TLdokIrKVgOIMNt-2jKfCq.jpg"
    }
}

#ifndef WIDGETSTYLE_H
#define WIDGETSTYLE_H

#include <QString>

    static QString widget_style= QString(
        "QLabel {"
                    "    font-family: Poppins;"
                    "    font-size:40px;"
                    "    font-weight:bold;            "
                    "    color: white;"
                    "                     "
                    "}"
        );

    static QString img_style= QString(
        "QLabel {"

        "    color:blue;"
        "margin:50px;"
        "}"
        );

/*
    static QString bar_style = QString(
        "QProgressBar {"
        "    height: 20px;"
        "border-radius:4px;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #05B8CC;"
        "    width: 70px;"
        "height:20px;"
        "}"
        );
*/

    static QString bar_style = QString(
        "QProgressBar {"
        "    height: 20px;"
        "    border: 1px solid #05B8CC;"
        "    border-radius: 4px;"
        "    background-color: #2E2E2E;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #05B8CC;"
        "    width: 20px;"
        "    height: 20px;"
        "    border-radius: 4px;"
        "}"
        );
#endif // WIDGETSTYLE_H

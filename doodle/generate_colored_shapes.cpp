// Name       : Dong - A Choi
// Assignment : Generate Points Image Assignment
// Course     : CS120
// Term & Year: 2020 fall

#include <doodle/doodle.hpp>
#include <iostream>

using namespace doodle;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    cout << "Enter in desired width: " << endl;
    int width{};
    cin >> width;

    cout << "Enter in desired height: " << endl;
    int height{};
    cin >> height;

    create_window(width, height);

    cout << "Enter background color" << endl;
    int backgroundColor;
    cin >> backgroundColor;
    clear_background(backgroundColor);

    cout << "Enter shape color" << endl;
    int shapeColor;
    cin >> shapeColor;
    set_fill_color(shapeColor);

    cout << "Enter outline color" << endl;
    int outlineColor;
    cin >> outlineColor;
    set_outline_color(outlineColor);

    cout << "Enter shape: " << endl;

    double posX1{};
    double posY1{};
    double posX2{};
    double posY2{};
    double posX3{};
    double posY3{};
    double posX4{};
    double posY4{};
    double shapeWidth{};
    double shapeHeight{};

    cout << "0 : elipse" << endl;
    cout << "1 : line" << endl;
    cout << "2 : quad" << endl;
    cout << "3 : rectangle" << endl;
    cout << "4 : triangle" << endl;

    int shapeNum = 10;
    cin >> shapeNum;

    switch (shapeNum)
    {
        case 0:
            while (cin >> posX1 >> posY1 >> shapeWidth >> shapeHeight)
            {
                draw_ellipse(posX1, posY1, shapeWidth, shapeHeight);
            }
            break;
        case 1:
            while (cin >> posX1 >> posY1 >> posX2 >> posY2)
            {
                draw_line(posX1, posY1, posX2, posY2);
            }
            break;
        case 2:
            while (cin >> posX1 >> posY1 >> posX2 >> posY2 >> posX3 >> posY3 >> posX4 >> posY4)
            {
                draw_quad(posX1, posY1, posX2, posY2, posX3, posY3, posX4, posY4);
            }
            break;
        case 3:
            while (cin >> posX1 >> posY1 >> shapeWidth >> shapeHeight)
            {
                draw_rectangle(posX1, posY1, shapeWidth, shapeHeight);
            }
            break;
        case 4:
            while (cin >> posX1 >> posY1 >> posX2 >> posY2 >> posX3 >> posY3)
            {
                draw_triangle(posX1, posY1, posX2, posY2, posX3, posY3);
            }
            break;
        default: break;
    }

    Image image = capture_screenshot_to_image();
    image.SaveToFile("points.png", Image::FileType::PNG);

    return 0;
}
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

    cout << "Enter in your points: " << endl;

    create_window(width, height);
    clear_background(120);
    no_outline();
    double pointsX{};
    double pointsY{};
    while (cin >> pointsX >> pointsY)
    {
        draw_ellipse(pointsX, pointsY, 8, 8);
    }
    Image image = capture_screenshot_to_image();
    image.SaveToFile("points.png", Image::FileType::PNG);

    return 0;
}

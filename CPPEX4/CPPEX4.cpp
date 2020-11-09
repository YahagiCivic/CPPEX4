#include <iostream>
#include "getVolumeSurface.h"

using namespace std;

int main()
{
    double width;//幅
    double height;//高さ
    double depth;//奥行

    double volume;//体積
    double surface;//表面積

    cout << "幅を入力(m):";
    cin >> width;

    cout << "高さを入力(m):";
    cin >> height;

    cout << "奥行を入力(m):";
    cin >> depth;

    if (width < 0 || height < 0 || depth < 0)
    {
        cout << "値にマイナスが含まれています。入力しなおしてください。";
    }
    else {
        getVolumeSurface(width, height, depth, &volume, &surface);
        cout << "体積は" << volume << "です。" << endl;
        cout << "表面積は" << surface << "です。" << endl;

        system("pause");
    }
    return 0;
}

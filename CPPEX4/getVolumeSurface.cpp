double getVolumeSurface(double width, double height, double depth, double* volume, double* surface)
{
    *volume = height * width * depth;
    *surface = (height * width + height * depth + width * depth) * 2;

    return 0;
}
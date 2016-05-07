class Maze{
public:
    Maze(string filename);
    Point getStartPosition();
    bool isOutside(Point start);
    bool wallExists(Point start, Direction dir);
    void markSquare(Point start);
    void unmarkSquare(Point start);
    bool isMarked(Point start);
    void
}
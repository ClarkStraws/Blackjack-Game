int randXPick();
int randYPick();

class Cards {
    int x;
    int y;
    int score;
public:

    Cards();

        void rank(int yVal);

        void suit(int xVal);

        int getRank();

        int getSuit();

        void setRank(int yVal);

        void setSuit(int xVal);

        int getScore();

        void setScore(int newScore);

private:

};
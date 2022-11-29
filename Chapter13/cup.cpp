class Cup
{
public:
    Cup();
    void shake();
    void Print();

private:
    vector<Die *> dice;
};

Cup::Cup()
{
    dice.push_back(new LoadedDie(6));
    dice.push_back(new LoadedDie(6));
    dice.push_back(new LoadedDie(6));
    dice.push_back(new RegularDie());
    dice.push_back(new RegularDie());
    dice.push_back(new RegularDie());
}

void Cup::shake()
{
    for (int i = 0; i < dice.size(); i++)
        dice.at(i)->roll();
}

void Cup::Print()
{
    for (int i = 0; i < dice.size(); i++)
        dice.at(i)->Print();
}

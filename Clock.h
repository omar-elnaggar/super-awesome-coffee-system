#pragma once


class Clock
{
    private:
        int seconds;




    public:
        Clock();
        Clock(int seconds);
        int getSeconds();
        void setSeconds(int num);
        void incrementFiveSeconds();
        void incrementTenSeconds();
        void incrementFifteenSeconds();
        int getMinutes();
        int getHours();
};


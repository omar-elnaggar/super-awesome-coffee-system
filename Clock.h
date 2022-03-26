#pragma once


class Clock
{
    private:
        int seconds;




    public:
        int getSeconds();
        void setSeconds(int num);
        void incrementFiveSeconds();
        void incrementTenSeconds();
        void incrementFifteenSeconds();
        int getMinutes();
        int getHours();
};


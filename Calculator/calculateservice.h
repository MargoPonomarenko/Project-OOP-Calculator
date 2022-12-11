#ifndef CALCULATESERVICE_H
#define CALCULATESERVICE_H


class CalculateService
{
public:
    static CalculateService *shared;
    static void init();
    static void deinit();

private:
    CalculateService();

};

#endif // CALCULATESERVICE_H

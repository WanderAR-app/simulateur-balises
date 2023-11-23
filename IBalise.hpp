// Interface de balise
class IBalise
{
public:
    virtual void init() = 0;
    virtual void diffuse() = 0;
    virtual ~IBalise() {}
};

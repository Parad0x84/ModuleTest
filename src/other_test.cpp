
import std;



template<typename T>
class FunctionTraits2;

template<typename RetVal, typename... Params>
class FunctionTraits2<RetVal(Params...)>
{
public:
    using Type = RetVal(*)(Params...);

    template<typename... Payloads>
    using PayloadedType = RetVal(*)(Params..., Payloads...);

public:
    PayloadedType<int> p;
};


// Make sure it's instantiated
FunctionTraits2<void(int)>::PayloadedType<int> p2;


export module test;




export
{
    template<typename T>
    class FunctionTraits;

    template<typename RetVal, typename... Params>
    class FunctionTraits<RetVal(Params...)>
    {
    public:
        using Type = RetVal(*)(Params...);

        template<typename... Payloads>
        using PayloadedType = RetVal(*)(Params..., Payloads...);

    public:
        // This line causes an internal compiler error. If you move the exact same code to a .cpp file, it just works
        // Removing export block doesn't seem to change anything, but original code was exporting. So I'll export here too
        //PayloadedType<int> p;
    };
}

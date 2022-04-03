classdef Number < Simulink.IntEnumType
    enumeration
        Zero(0)
        One(1)
        Two(2)
    end
    methods(Static)
        function retVal = getDfaultValue()
            retVal = Number.One;
        end
    end
end

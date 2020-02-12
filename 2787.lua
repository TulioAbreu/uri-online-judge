function ehPar(numero)
    return (numero%2)==0
end

function ehImpar(numero)
    return (numero%2)~=0
end

local preto = 0
local branco = 1

line = tonumber(io.read())
column = tonumber(io.read())

if ehPar(line) then
    if ehPar(column) then
        print(branco)
    else
        print(preto)
    end
else
    if ehPar(column) then
        print(preto)
    else
        print(branco)
    end
end
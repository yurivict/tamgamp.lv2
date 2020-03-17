v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 44700 46400 1 90 0 resistor-2.sym
{
T 44350 46800 5 10 0 0 90 0 1
device=RESISTOR
T 45100 47100 5 10 1 1 180 0 1
refdes=R5
T 44800 46600 5 10 1 1 0 0 1
value=33k
}
C 46000 47800 1 180 0 capacitor-1.sym
{
T 45800 47100 5 10 0 0 180 0 1
device=CAPACITOR
T 45200 47700 5 10 1 1 0 0 1
refdes=C4
T 45800 46900 5 10 0 0 180 0 1
symversion=0.1
T 46100 47900 5 10 1 1 180 0 1
value=470p
}
C 46400 44900 1 270 1 resistor-variable-2.sym
{
T 46050 45200 5 10 1 1 180 6 1
refdes=P2
T 47300 45700 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 48200 45000 5 10 1 1 180 0 1
value=value=1M,var=bass
}
C 41900 47500 1 0 0 input-1.sym
{
T 41900 47800 5 10 0 0 0 0 1
device=INPUT
T 41900 47500 5 10 1 1 0 0 1
refdes=IN1
}
C 49700 47000 1 180 1 output-1.sym
{
T 49800 46700 5 10 0 0 180 6 1
device=OUTPUT
T 49900 47000 5 10 1 1 180 6 1
refdes=OUT1
}
C 44400 45400 1 270 0 capacitor-1.sym
{
T 45100 45200 5 10 0 0 270 0 1
device=CAPACITOR
T 44500 45200 5 10 1 1 180 0 1
refdes=C5
T 45300 45200 5 10 0 0 270 0 1
symversion=0.1
T 43900 44500 5 10 1 1 0 0 1
value=0.022u
}
C 46000 46200 1 180 0 capacitor-1.sym
{
T 45800 45500 5 10 0 0 180 0 1
device=CAPACITOR
T 45200 46100 5 10 1 1 0 0 1
refdes=C3
T 45800 45300 5 10 0 0 180 0 1
symversion=0.1
T 45800 45700 5 10 1 1 180 0 1
value=0.022u
}
C 46600 43600 1 90 0 resistor-variable-2.sym
{
T 46350 44000 5 10 1 1 180 0 1
refdes=P3
T 45700 44400 5 10 0 1 90 0 1
device=VARIABLE_RESISTOR
T 46800 43700 5 10 1 1 180 6 1
value=value=25k,var=middle
}
C 46600 42800 1 0 1 gnd-1.sym
C 46000 48500 1 180 0 capacitor-1.sym
{
T 45800 47800 5 10 0 0 180 0 1
device=CAPACITOR
T 45200 48400 5 10 1 1 0 0 1
refdes=C1
T 45800 47600 5 10 0 0 180 0 1
symversion=0.1
T 46100 48600 5 10 1 1 180 0 1
value=100p
}
C 46400 46400 1 270 1 resistor-variable-2.sym
{
T 47300 47200 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 46150 47100 5 10 1 1 180 6 1
refdes=P1
T 48400 47200 5 10 1 1 180 0 1
value=value=250k,var=treble
}
N 45100 48300 44600 48300 4
N 44600 48300 44600 47300 4
N 45100 47600 44600 47600 4
N 46000 48300 46500 48300 4
N 46500 48300 46500 47300 4
N 46000 47600 46500 47600 4
N 44600 46400 44600 45400 4
N 45100 46000 44600 46000 4
N 46500 46400 46500 45800 4
N 46000 46000 46500 46000 4
N 46500 44900 46500 44500 4
N 46000 44100 44600 44100 4
N 44600 44100 44600 44500 4
N 46500 43600 46500 43100 4
N 47000 45400 47000 46000 4
N 47000 46000 46500 46000 4
N 47000 46900 49700 46900 4
N 42700 47600 44600 47600 4

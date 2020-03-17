v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 44900 46800 1 90 0 resistor-2.sym
{
T 44550 47200 5 10 0 0 90 0 1
device=RESISTOR
T 45300 47500 5 10 1 1 180 0 1
refdes=R5
T 45000 47000 5 10 1 1 0 0 1
value=100k
}
C 41400 45200 1 0 0 input-1.sym
{
T 41400 45500 5 10 0 0 0 0 1
device=INPUT
T 41400 45200 5 10 1 1 0 0 1
refdes=IN1
}
C 47900 46500 1 180 1 output-1.sym
{
T 48000 46200 5 10 0 0 180 6 1
device=OUTPUT
T 48100 46500 5 10 1 1 180 6 1
refdes=OUT1
}
C 43800 43300 1 90 0 resistor-2.sym
{
T 43450 43700 5 10 0 0 90 0 1
device=RESISTOR
T 43500 44000 5 10 1 1 180 0 1
refdes=R2
T 43200 43500 5 10 1 1 0 0 1
value=1M
}
C 45100 43300 1 90 0 resistor-2.sym
{
T 44750 43700 5 10 0 0 90 0 1
device=RESISTOR
T 44800 44000 5 10 1 1 180 0 1
refdes=R3
T 44500 43500 5 10 1 1 0 0 1
value=39k
}
C 45700 47700 1 270 0 capacitor-1.sym
{
T 46400 47500 5 10 0 0 270 0 1
device=CAPACITOR
T 45800 47600 5 10 1 1 180 0 1
refdes=C6
T 46600 47500 5 10 0 0 270 0 1
symversion=0.1
T 46000 46900 5 10 1 1 0 0 1
value=0.001u
}
C 47500 46600 1 180 0 capacitor-1.sym
{
T 47300 45900 5 10 0 0 180 0 1
device=CAPACITOR
T 46900 46700 5 10 1 1 0 0 1
refdes=C7
T 47300 45700 5 10 0 0 180 0 1
symversion=0.1
T 47300 46100 5 10 1 1 180 0 1
value=0.02u
}
C 43300 45400 1 180 0 resistor-2.sym
{
T 42900 45050 5 10 0 0 180 0 1
device=RESISTOR
T 42800 45500 5 10 1 1 0 0 1
refdes=R4
T 43100 45100 5 10 1 1 180 0 1
value=470k
}
C 43800 42300 1 0 1 gnd-1.sym
C 42400 43300 1 0 0 triode.sym
{
T 44300 45900 5 10 1 1 0 0 1
refdes=U2
T 45100 45800 5 10 1 1 0 0 1
value=12ax7
T 44800 45400 5 10 0 1 0 0 1
device=TRIODE
}
C 44600 48000 1 0 0 generic-power-1.sym
{
T 44600 48300 5 10 1 1 0 0 1
refdes=Vcc1
T 45100 48300 5 10 1 1 0 0 1
value=406V
T 44600 48000 5 10 0 0 0 0 1
device=POWER
}
N 42200 45300 42400 45300 4
N 43300 45300 44000 45300 4
N 43700 44200 43700 45300 4
N 43700 43300 43700 42600 4
N 45000 44600 45000 44200 4
N 45000 43300 45000 42700 4
N 45000 42700 43700 42700 4
N 44800 46100 44800 46800 4
N 44800 47700 44800 48000 4
N 44800 47900 45900 47900 4
N 45900 47900 45900 47700 4
N 46600 46400 44800 46400 4
N 45900 46800 45900 46400 4
N 47500 46400 47900 46400 4

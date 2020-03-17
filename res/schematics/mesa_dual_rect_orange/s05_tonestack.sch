v 20130925 2
C 40000 40000 0 0 0 title-B.sym
C 48800 45500 1 90 0 resistor-2.sym
{
T 48450 45900 5 10 0 0 90 0 1
device=RESISTOR
T 49200 46200 5 10 1 1 180 0 1
refdes=R5
T 48900 45700 5 10 1 1 0 0 1
value=32k
}
C 45800 46200 1 180 0 capacitor-1.sym
{
T 45600 45500 5 10 0 0 180 0 1
device=CAPACITOR
T 45000 46100 5 10 1 1 0 0 1
refdes=C4
T 45600 45300 5 10 0 0 180 0 1
symversion=0.1
T 45400 45700 5 10 1 1 180 0 1
value=0.02u
}
C 49900 45500 1 270 1 resistor-variable-2.sym
{
T 49550 45800 5 10 1 1 180 6 1
refdes=P2
T 50800 46300 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 52000 45700 5 10 1 1 180 0 1
value=value=1M,var=master
}
C 41600 47400 1 0 0 input-1.sym
{
T 41600 47700 5 10 0 0 0 0 1
device=INPUT
T 41600 47400 5 10 1 1 0 0 1
refdes=IN1
}
C 51000 46100 1 180 1 output-1.sym
{
T 51100 45800 5 10 0 0 180 6 1
device=OUTPUT
T 51200 46100 5 10 1 1 180 6 1
refdes=OUT1
}
C 44600 46300 1 90 0 resistor-2.sym
{
T 44250 46700 5 10 0 0 90 0 1
device=RESISTOR
T 44300 47000 5 10 1 1 180 0 1
refdes=R2
T 44000 46600 5 10 1 1 0 0 1
value=47k
}
C 48500 44800 1 270 0 capacitor-1.sym
{
T 49200 44600 5 10 0 0 270 0 1
device=CAPACITOR
T 48600 44600 5 10 1 1 180 0 1
refdes=C5
T 49400 44600 5 10 0 0 270 0 1
symversion=0.1
T 48100 44000 5 10 1 1 0 0 1
value=0.003u
}
C 45800 47700 1 180 0 capacitor-1.sym
{
T 45600 47000 5 10 0 0 180 0 1
device=CAPACITOR
T 45000 47600 5 10 1 1 0 0 1
refdes=C3
T 45600 46800 5 10 0 0 180 0 1
symversion=0.1
T 45400 47200 5 10 1 1 180 0 1
value=500p
}
C 46400 43600 1 90 0 resistor-variable-2.sym
{
T 46750 44200 5 10 1 1 180 0 1
refdes=P4
T 45500 44400 5 10 0 1 90 0 1
device=VARIABLE_RESISTOR
T 46400 43600 5 10 1 1 180 6 1
value=value=25k,var=middle
}
C 43300 46300 1 90 0 resistor-2.sym
{
T 42950 46700 5 10 0 0 90 0 1
device=RESISTOR
T 43000 47000 5 10 1 1 180 0 1
refdes=R1
T 42700 46600 5 10 1 1 0 0 1
value=1M
}
C 46200 44800 1 270 1 resistor-variable-2.sym
{
T 46450 45200 5 10 1 1 180 6 1
refdes=P3
T 47100 45600 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 48000 44900 5 10 1 1 180 0 1
value=value=1M,var=bass
}
C 45700 44300 1 180 0 capacitor-1.sym
{
T 45500 43600 5 10 0 0 180 0 1
device=CAPACITOR
T 44900 44200 5 10 1 1 0 0 1
refdes=C7
T 45500 43400 5 10 0 0 180 0 1
symversion=0.1
T 45300 43800 5 10 1 1 180 0 1
value=0.02u
}
C 43300 42700 1 0 1 gnd-1.sym
C 46200 46300 1 270 1 resistor-variable-2.sym
{
T 47100 47100 5 10 0 1 90 2 1
device=VARIABLE_RESISTOR
T 45950 47000 5 10 1 1 180 6 1
refdes=P1
T 48300 47100 5 10 1 1 180 0 1
value=value=250k,var=treble
}
N 42400 47500 44900 47500 4
N 43200 47500 43200 47200 4
N 43200 46300 43200 43000 4
N 44500 47500 44500 47200 4
N 44500 46000 44900 46000 4
N 46300 46300 46300 45700 4
N 46300 44800 46300 44500 4
N 45800 44100 45700 44100 4
N 46800 46000 46800 45300 4
N 46300 43600 46300 43300 4
N 43200 43300 50000 43300 4
N 44500 46300 44500 44100 4
N 44500 44100 44800 44100 4
N 45800 47500 46300 47500 4
N 46300 47500 46300 47200 4
N 48700 43900 48700 43300 4
N 46800 46800 50000 46800 4
N 48700 46800 48700 46400 4
N 48700 45500 48700 44800 4
N 50000 45500 50000 43300 4
N 50000 46800 50000 46400 4
N 50500 46000 51000 46000 4
N 45800 46000 46300 46000 4
N 46800 46000 46300 46000 4

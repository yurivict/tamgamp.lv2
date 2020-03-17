
// s03_stage3_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  59.698511
 // --table_op  1.000000

struct tables03_stage3_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables03_stage3_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables03_stage3_neg&() const { return *(tables03_stage3_neg*)this; }
};

static tables03_stage3_neg_imp<2048> s03_stage3_neg_table __rt_data = {
	0,0.844115,204.7,2048, {
	0.000000000000,0.002095066295,0.004000563937,0.005740673036,0.007336788635,
	0.008807828993,0.010170510558,0.011439593177,0.012628098708,0.013747505856,
	0.014807923791,0.015818246798,0.016786291992,0.017718921923,0.018622153684,
	0.019501255978,0.020360835438,0.021204913375,0.022036993967,0.022860124839,
	0.023676950847,0.024489761817,0.025300534889,0.026110972064,0.026922533480,
	0.027736466880,0.028553833707,0.029375532182,0.030202317712,0.031034820921,
	0.031873563572,0.032718972612,0.033571392557,0.034431096400,0.035298295211,
	0.036173146581,0.037055762034,0.037946213535,0.038844539192,0.039750748250,
	0.040664825450,0.041586734848,0.042516423125,0.043453822486,0.044398853165,
	0.045351425601,0.046311442323,0.047278799571,0.048253388697,0.049235097361,
	0.050223810559,0.051219411493,0.052221782319,0.053230804766,0.054246360664,
	0.055268332382,0.056296603192,0.057331057558,0.058371581388,0.059418062215,
	0.060470389352,0.061528454005,0.062592149356,0.063661370622,0.064736015090,
	0.065815982136,0.066901173223,0.067991491897,0.069086843762,0.070187136450,
	0.071292279591,0.072402184762,0.073516765451,0.074635937004,0.075759616573,
	0.076887723069,0.078020177103,0.079156900940,0.080297818440,0.081442855010,
	0.082591937550,0.083744994406,0.084901955318,0.086062751373,0.087227314961,
	0.088395579730,0.089567480540,0.090742953428,0.091921935563,0.093104365211,
	0.094290181699,0.095479325379,0.096671737597,0.097867360661,0.099066137809,
	0.100268013184,0.101472931805,0.102680839541,0.103891683089,0.105105409946,
	0.106321968391,0.107541307462,0.108763376938,0.109987754076,0.111214467559,
	0.112443593581,0.113675130106,0.114909056495,0.116145343794,0.117383958558,
	0.118624864694,0.119868024479,0.121113399179,0.122360949457,0.123610635645,
	0.124862417943,0.126116256555,0.127372111798,0.128629944178,0.129889714447,
	0.131151383652,0.132414913167,0.133680264717,0.134947400404,0.136216282714,
	0.137486874534,0.138759139157,0.140033040286,0.141308542040,0.142585608955,
	0.143864205981,0.145144298485,0.146425852248,0.147708833463,0.148993208730,
	0.150278945055,0.151566009849,0.152854370915,0.154143996455,0.155434855057,
	0.156726915696,0.158020147726,0.159314520878,0.160610005253,0.161906571321,
	0.163204189912,0.164502832215,0.165802469772,0.167103074472,0.168404618551,
	0.169707074582,0.171010415475,0.172314614471,0.173619645137,0.174925481362,
	0.176232097357,0.177539467643,0.178847567055,0.180156370733,0.181465854120,
	0.182775992957,0.184086763280,0.185398141419,0.186710103989,0.188022627890,
	0.189335690302,0.190649268684,0.191963340766,0.193277884550,0.194592878305,
	0.195908300563,0.197224130118,0.198540346018,0.199856927569,0.201173854325,
	0.202491106091,0.203808662914,0.205126505085,0.206444613134,0.207762967826,
	0.209081550160,0.210400341368,0.211719322905,0.213038476456,0.214357783925,
	0.215677227439,0.216996789338,0.218316452181,0.219636198735,0.220956011981,
	0.222275875103,0.223595771491,0.224915684738,0.226235598636,0.227555497176,
	0.228875364540,0.230195185108,0.231514943447,0.232834624314,0.234154212651,
	0.235473693584,0.236793052422,0.238112274653,0.239431345941,0.240750252128,
	0.242068979227,0.243387513423,0.244705841072,0.246023948696,0.247341822981,
	0.248659450778,0.249976819101,0.251293915121,0.252610726168,0.253927239727,
	0.255243443439,0.256559325095,0.257874872639,0.259190074162,0.260504917902,
	0.261819392244,0.263133485714,0.264447186984,0.265760484861,0.267073368296,
	0.268385826372,0.269697848312,0.271009423470,0.272320541334,0.273631191521,
	0.274941363778,0.276251047981,0.277560234131,0.278868912354,0.280177072899,
	0.281484706137,0.282791802561,0.284098352780,0.285404347524,0.286709777637,
	0.288014634080,0.289318907925,0.290622590358,0.291925672675,0.293228146285,
	0.294530002700,0.295831233544,0.297131830543,0.298431785531,0.299731090444,
	0.301029737320,0.302327718299,0.303625025619,0.304921651618,0.306217588733,
	0.307512829495,0.308807366531,0.310101192564,0.311394300407,0.312686682968,
	0.313978333244,0.315269244322,0.316559409379,0.317848821679,0.319137474573,
	0.320425361497,0.321712475974,0.322998811608,0.324284362088,0.325569121183,
	0.326853082745,0.328136240703,0.329418589069,0.330700121929,0.331980833449,
	0.333260717871,0.334539769510,0.335817982759,0.337095352081,0.338371872015,
	0.339647537171,0.340922342229,0.342196281940,0.343469351124,0.344741544671,
	0.346012857537,0.347283284747,0.348552821390,0.349821462622,0.351089203664,
	0.352356039800,0.353621966377,0.354886978805,0.356151072557,0.357414243164,
	0.358676486221,0.359937797379,0.361198172351,0.362457606906,0.363716096871,
	0.364973638131,0.366230226626,0.367485858351,0.368740529359,0.369994235753,
	0.371246973693,0.372498739389,0.373749529107,0.374999339162,0.376248165920,
	0.377496005799,0.378742855266,0.379988710839,0.381233569082,0.382477426609,
	0.383720280082,0.384962126208,0.386202961743,0.387442783488,0.388681588289,
	0.389919373037,0.391156134668,0.392391870161,0.393626576539,0.394860250868,
	0.396092890255,0.397324491851,0.398555052846,0.399784570473,0.401013042003,
	0.402240464749,0.403466836062,0.404692153334,0.405916413993,0.407139615505,
	0.408361755377,0.409582831149,0.410802840400,0.412021780745,0.413239649835,
	0.414456445355,0.415672165027,0.416886806606,0.418100367882,0.419312846679,
	0.420524240853,0.421734548295,0.422943766926,0.424151894702,0.425358929610,
	0.426564869666,0.427769712920,0.428973457453,0.430176101373,0.431377642821,
	0.432578079966,0.433777411008,0.434975634174,0.436172747720,0.437368749931,
	0.438563639120,0.439757413626,0.440950071817,0.442141612087,0.443332032857,
	0.444521332574,0.445709509710,0.446896562764,0.448082490261,0.449267290748,
	0.450450962801,0.451633505017,0.452814916018,0.453995194450,0.455174338984,
	0.456352348311,0.457529221149,0.458704956236,0.459879552332,0.461053008222,
	0.462225322710,0.463396494624,0.464566522812,0.465735406142,0.466903143507,
	0.468069733816,0.469235176000,0.470399469012,0.471562611823,0.472724603423,
	0.473885442823,0.475045129053,0.476203661161,0.477361038214,0.478517259298,
	0.479672323517,0.480826229993,0.481978977866,0.483130566293,0.484280994449,
	0.485430261525,0.486578366732,0.487725309295,0.488871088455,0.490015703471,
	0.491159153619,0.492301438189,0.493442556487,0.494582507835,0.495721291572,
	0.496858907048,0.497995353632,0.499130630707,0.500264737669,0.501397673929,
	0.502529438914,0.503660032064,0.504789452831,0.505917700684,0.507044775103,
	0.508170675583,0.509295401632,0.510418952770,0.511541328532,0.512662528463,
	0.513782552123,0.514901399083,0.516019068926,0.517135561250,0.518250875661,
	0.519365011780,0.520477969237,0.521589747676,0.522700346751,0.523809766127,
	0.524918005482,0.526025064502,0.527130942886,0.528235640343,0.529339156593,
	0.530441491366,0.531542644402,0.532642615452,0.533741404277,0.534839010646,
	0.535935434340,0.537030675148,0.538124732871,0.539217607317,0.540309298304,
	0.541399805658,0.542489129218,0.543577268827,0.544664224339,0.545749995618,
	0.546834582534,0.547917984967,0.549000202806,0.550081235946,0.551161084293,
	0.552239747759,0.553317226263,0.554393519736,0.555468628112,0.556542551335,
	0.557615289357,0.558686842135,0.559757209637,0.560826391835,0.561894388710,
	0.562961200249,0.564026826445,0.565091267302,0.566154522825,0.567216593031,
	0.568277477940,0.569337177579,0.570395691984,0.571453021194,0.572509165256,
	0.573564124223,0.574617898153,0.575670487112,0.576721891171,0.577772110405,
	0.578821144898,0.579868994737,0.580915660016,0.581961140834,0.583005437295,
	0.584048549510,0.585090477593,0.586131221665,0.587170781852,0.588209158284,
	0.589246351097,0.590282360430,0.591317186430,0.592350829247,0.593383289036,
	0.594414565955,0.595444660170,0.596473571848,0.597501301163,0.598527848293,
	0.599553213419,0.600577396727,0.601600398407,0.602622218654,0.603642857666,
	0.604662315647,0.605680592801,0.606697689340,0.607713605478,0.608728341432,
	0.609741897425,0.610754273682,0.611765470432,0.612775487907,0.613784326343,
	0.614791985981,0.615798467063,0.616803769835,0.617807894547,0.618810841451,
	0.619812610805,0.620813202866,0.621812617898,0.622810856165,0.623807917935,
	0.624803803481,0.625798513077,0.626792046999,0.627784405527,0.628775588944,
	0.629765597535,0.630754431588,0.631742091395,0.632728577247,0.633713889442,
	0.634698028277,0.635680994053,0.636662787073,0.637643407643,0.638622856071,
	0.639601132667,0.640578237744,0.641554171615,0.642528934599,0.643502527013,
	0.644474949180,0.645446201422,0.646416284065,0.647385197435,0.648352941863,
	0.649319517678,0.650284925214,0.651249164806,0.652212236791,0.653174141506,
	0.654134879292,0.655094450491,0.656052855447,0.657010094504,0.657966168009,
	0.658921076311,0.659874819760,0.660827398708,0.661778813506,0.662729064510,
	0.663678152075,0.664626076559,0.665572838321,0.666518437719,0.667462875116,
	0.668406150873,0.669348265356,0.670289218928,0.671229011956,0.672167644807,
	0.673105117850,0.674041431454,0.674976585991,0.675910581831,0.676843419347,
	0.677775098915,0.678705620907,0.679634985700,0.680563193671,0.681490245198,
	0.682416140657,0.683340880430,0.684264464897,0.685186894437,0.686108169433,
	0.687028290268,0.687947257325,0.688865070987,0.689781731640,0.690697239669,
	0.691611595460,0.692524799400,0.693436851876,0.694347753275,0.695257503987,
	0.696166104399,0.697073554903,0.697979855888,0.698885007744,0.699789010862,
	0.700691865635,0.701593572453,0.702494131709,0.703393543795,0.704291809106,
	0.705188928034,0.706084900973,0.706979728317,0.707873410460,0.708765947798,
	0.709657340724,0.710547589635,0.711436694925,0.712324656991,0.713211476228,
	0.714097153032,0.714981687799,0.715865080926,0.716747332809,0.717628443845,
	0.718508414430,0.719387244961,0.720264935835,0.721141487449,0.722016900200,
	0.722891174484,0.723764310699,0.724636309242,0.725507170509,0.726376894898,
	0.727245482805,0.728112934628,0.728979250762,0.729844431604,0.730708477552,
	0.731571389001,0.732433166348,0.733293809989,0.734153320320,0.735011697737,
	0.735868942635,0.736725055410,0.737580036457,0.738433886171,0.739286604947,
	0.740138193179,0.740988651262,0.741837979590,0.742686178557,0.743533248555,
	0.744379189979,0.745224003221,0.746067688673,0.746910246728,0.747751677778,
	0.748591982214,0.749431160427,0.750269212808,0.751106139748,0.751941941635,
	0.752776618861,0.753610171813,0.754442600881,0.755273906453,0.756104088917,
	0.756933148660,0.757761086069,0.758587901530,0.759413595429,0.760238168152,
	0.761061620083,0.761883951608,0.762705163109,0.763525254970,0.764344227574,
	0.765162081303,0.765978816539,0.766794433662,0.767608933054,0.768422315094,
	0.769234580161,0.770045728635,0.770855760892,0.771664677312,0.772472478270,
	0.773279164143,0.774084735306,0.774889192135,0.775692535003,0.776494764283,
	0.777295880350,0.778095883575,0.778894774329,0.779692552984,0.780489219909,
	0.781284775474,0.782079220047,0.782872553997,0.783664777690,0.784455891493,
	0.785245895771,0.786034790890,0.786822577214,0.787609255106,0.788394824928,
	0.789179287043,0.789962641811,0.790744889592,0.791526030747,0.792306065633,
	0.793084994609,0.793862818030,0.794639536254,0.795415149636,0.796189658529,
	0.796963063288,0.797735364265,0.798506561812,0.799276656280,0.800045648020,
	0.800813537379,0.801580324707,0.802346010351,0.803110594657,0.803874077971,
	0.804636460638,0.805397743002,0.806157925405,0.806917008189,0.807674991695,
	0.808431876263,0.809187662233,0.809942349942,0.810695939728,0.811448431927,
	0.812199826873,0.812950124902,0.813699326347,0.814447431539,0.815194440811,
	0.815940354492,0.816685172912,0.817428896399,0.818171525280,0.818913059883,
	0.819653500531,0.820392847549,0.821131101261,0.821868261989,0.822604330053,
	0.823339305774,0.824073189471,0.824805981462,0.825537682063,0.826268291591,
	0.826997810361,0.827726238686,0.828453576878,0.829179825250,0.829904984112,
	0.830629053773,0.831352034542,0.832073926725,0.832794730629,0.833514446559,
	0.834233074818,0.834950615710,0.835667069536,0.836382436596,0.837096717190,
	0.837809911616,0.838522020172,0.839233043152,0.839942980852,0.840651833566,
	0.841359601586,0.842066285203,0.842771884708,0.843476400389,0.844179832535,
	0.844882181432,0.845583447365,0.846283630619,0.846982731477,0.847680750221,
	0.848377687131,0.849073542487,0.849768316568,0.850462009650,0.851154622009,
	0.851846153920,0.852536605657,0.853225977491,0.853914269694,0.854601482535,
	0.855287616283,0.855972671206,0.856656647569,0.857339545637,0.858021365673,
	0.858702107941,0.859381772701,0.860060360212,0.860737870734,0.861414304524,
	0.862089661837,0.862763942928,0.863437148052,0.864109277459,0.864780331401,
	0.865450310127,0.866119213886,0.866787042924,0.867453797488,0.868119477821,
	0.868784084168,0.869447616769,0.870110075864,0.870771461694,0.871431774496,
	0.872091014507,0.872749181961,0.873406277092,0.874062300133,0.874717251316,
	0.875371130869,0.876023939022,0.876675676001,0.877326342033,0.877975937341,
	0.878624462149,0.879271916679,0.879918301150,0.880563615782,0.881207860793,
	0.881851036398,0.882493142813,0.883134180250,0.883774148923,0.884413049041,
	0.885050880814,0.885687644450,0.886323340156,0.886957968135,0.887591528594,
	0.888224021732,0.888855447752,0.889485806853,0.890115099232,0.890743325087,
	0.891370484613,0.891996578003,0.892621605451,0.893245567145,0.893868463277,
	0.894490294035,0.895111059604,0.895730760170,0.896349395916,0.896966967026,
	0.897583473679,0.898198916056,0.898813294333,0.899426608687,0.900038859294,
	0.900650046326,0.901260169956,0.901869230355,0.902477227690,0.903084162130,
	0.903690033841,0.904294842987,0.904898589731,0.905501274235,0.906102896659,
	0.906703457162,0.907302955900,0.907901393030,0.908498768704,0.909095083077,
	0.909690336297,0.910284528516,0.910877659881,0.911469730538,0.912060740633,
	0.912650690308,0.913239579706,0.913827408966,0.914414178228,0.914999887628,
	0.915584537302,0.916168127385,0.916750658008,0.917332129303,0.917912541399,
	0.918491894424,0.919070188503,0.919647423763,0.920223600325,0.920798718311,
	0.921372777842,0.921945779035,0.922517722007,0.923088606873,0.923658433747,
	0.924227202742,0.924794913966,0.925361567529,0.925927163538,0.926491702099,
	0.927055183315,0.927617607288,0.928178974120,0.928739283909,0.929298536753,
	0.929856732748,0.930413871987,0.930969954563,0.931524980567,0.932078950088,
	0.932631863214,0.933183720030,0.933734520621,0.934284265069,0.934832953456,
	0.935380585860,0.935927162359,0.936472683029,0.937017147945,0.937560557178,
	0.938102910800,0.938644208880,0.939184451485,0.939723638681,0.940261770533,
	0.940798847102,0.941334868449,0.941869834634,0.942403745714,0.942936601744,
	0.943468402778,0.943999148868,0.944528840065,0.945057476418,0.945585057973,
	0.946111584775,0.946637056869,0.947161474295,0.947684837095,0.948207145305,
	0.948728398964,0.949248598105,0.949767742761,0.950285832964,0.950802868743,
	0.951318850127,0.951833777140,0.952347649808,0.952860468152,0.953372232193,
	0.953882941950,0.954392597440,0.954901198679,0.955408745679,0.955915238453,
	0.956420677011,0.956925061359,0.957428391506,0.957930667454,0.958431889207,
	0.958932056766,0.959431170130,0.959929229295,0.960426234257,0.960922185009,
	0.961417081544,0.961910923851,0.962403711918,0.962895445731,0.963386125275,
	0.963875750531,0.964364321481,0.964851838103,0.965338300373,0.965823708268,
	0.966308061760,0.966791360820,0.967273605417,0.967754795520,0.968234931093,
	0.968714012100,0.969192038504,0.969669010263,0.970144927336,0.970619789679,
	0.971093597247,0.971566349991,0.972038047861,0.972508690807,0.972978278774,
	0.973446811707,0.973914289550,0.974380712241,0.974846079721,0.975310391926,
	0.975773648791,0.976235850249,0.976696996230,0.977157086665,0.977616121479,
	0.978074100598,0.978531023944,0.978986891440,0.979441703005,0.979895458554,
	0.980348158004,0.980799801268,0.981250388257,0.981699918880,0.982148393044,
	0.982595810655,0.983042171615,0.983487475827,0.983931723188,0.984374913596,
	0.984817046947,0.985258123133,0.985698142046,0.986137103574,0.986575007604,
	0.987011854021,0.987447642709,0.987882373548,0.988316046416,0.988748661191,
	0.989180217747,0.989610715957,0.990040155691,0.990468536818,0.990895859203,
	0.991322122712,0.991747327206,0.992171472546,0.992594558589,0.993016585192,
	0.993437552207,0.993857459488,0.994276306883,0.994694094240,0.995110821404,
	0.995526488218,0.995941094524,0.996354640161,0.996767124964,0.997178548769,
	0.997588911409,0.997998212714,0.998406452511,0.998813630628,0.999219746887,
	0.999624801112,1.000028793120,1.000431722730,1.000833589757,1.001234394014,
	1.001634135311,1.002032813458,1.002430428261,1.002826979523,1.003222467048,
	1.003616890635,1.004010250081,1.004402545183,1.004793775733,1.005183941522,
	1.005573042339,1.005961077970,1.006348048201,1.006733952812,1.007118791584,
	1.007502564294,1.007885270717,1.008266910627,1.008647483795,1.009026989988,
	1.009405428973,1.009782800514,1.010159104373,1.010534340309,1.010908508080,
	1.011281607440,1.011653638141,1.012024599934,1.012394492567,1.012763315785,
	1.013131069332,1.013497752949,1.013863366375,1.014227909345,1.014591381594,
	1.014953782853,1.015315112853,1.015675371319,1.016034557977,1.016392672549,
	1.016749714755,1.017105684312,1.017460580936,1.017814404339,1.018167154233,
	1.018518830325,1.018869432321,1.019218959924,1.019567412836,1.019914790755,
	1.020261093377,1.020606320396,1.020950471503,1.021293546388,1.021635544736,
	1.021976466233,1.022316310560,1.022655077396,1.022992766418,1.023329377300,
	1.023664909715,1.023999363332,1.024332737819,1.024665032839,1.024996248056,
	1.025326383129,1.025655437715,1.025983411469,1.026310304043,1.026636115088,
	1.026960844251,1.027284491177,1.027607055508,1.027928536885,1.028248934944,
	1.028568249321,1.028886479648,1.029203625555,1.029519686670,1.029834662618,
	1.030148553021,1.030461357499,1.030773075669,1.031083707147,1.031393251544,
	1.031701708471,1.032009077534,1.032315358339,1.032620550488,1.032924653579,
	1.033227667212,1.033529590979,1.033830424473,1.034130167283,1.034428818996,
	1.034726379197,1.035022847466,1.035318223384,1.035612506526,1.035905696467,
	1.036197792777,1.036488795026,1.036778702780,1.037067515603,1.037355233054,
	1.037641854693,1.037927380076,1.038211808755,1.038495140281,1.038777374202,
	1.039058510063,1.039338547406,1.039617485773,1.039895324699,1.040172063721,
	1.040447702369,1.040722240174,1.040995676662,1.041268011358,1.041539243782,
	1.041809373454,1.042078399891,1.042346322605,1.042613141107,1.042878854906,
	1.043143463508,1.043406966414,1.043669363126,1.043930653141,1.044190835954,
	1.044449911057,1.044707877939,1.044964736088,1.045220484988,1.045475124119,
	1.045728652961,1.045981070990,1.046232377679,1.046482572499,1.046731654919,
	1.046979624402,1.047226480412,1.047472222409,1.047716849849,1.047960362188,
	1.048202758877,1.048444039366,1.048684203100,1.048923249522,1.049161178076,
	1.049397988197,1.049633679322,1.049868250883,1.050101702311,1.050334033034,
	1.050565242474,1.050795330055,1.051024295195,1.051252137312,1.051478855818,
	1.051704450125,1.051928919641,1.052152263771,1.052374481919,1.052595573484,
	1.052815537863,1.053034374453,1.053252082643,1.053468661824,1.053684111382,
	1.053898430700,1.054111619161,1.054323676141,1.054534601016,1.054744393160,
	1.054953051943,1.055160576731,1.055366966889,1.055572221780,1.055776340763,
	1.055979323194,1.056181168426,1.056381875812,1.056581444699,1.056779874432,
	1.056977164356,1.057173313810,1.057368322131,1.057562188655,1.057754912713,
	1.057946493636,1.058136930748,1.058326223376,1.058514370839,1.058701372457,
	1.058887227546,1.059071935418,1.059255495385,1.059437906754,1.059619168830,
	1.059799280916,1.059978242312,1.060156052316,1.060332710221,1.060508215319,
	1.060682566901,1.060855764252,1.061027806656,1.061198693395,1.061368423748,
	1.061536996990,1.061704412395,1.061870669234,1.062035766776,1.062199704284,
	1.062362481024,1.062524096255,1.062684549234,1.062843839218,1.063001965459,
	1.063158927208,1.063314723710,1.063469354213,1.063622817957,1.063775114184,
	1.063926242130,1.064076201031,1.064224990118,1.064372608622,1.064519055770,
	1.064664330786,1.064808432894,1.064951361313,1.065093115260,1.065233693951,
	1.065373096598,1.065511322412,1.065648370599,1.065784240366,1.065918930915,
	1.066052441446,1.066184771158,1.066315919247,1.066445884906,1.066574667325,
	1.066702265694,1.066828679199,1.066953907025,1.067077948352,1.067200802360,
	1.067322468228,1.067442945128,1.067562232235,1.067680328719,1.067797233748,
	1.067912946488,1.068027466103,1.068140791754,1.068252922602,1.068363857804,
	1.068473596515,1.068582137888,1.068689481074,1.068795625222,1.068900569480,
	1.069004312992,1.069106854900,1.069208194347,1.069308330471,1.069407262408,
	1.069504989294,1.069601510261,1.069696824441,1.069790930964,1.069883828956,
	1.069975517542,1.070065995847,1.070155262993,1.070243318099,1.070330160284,
	1.070415788664,1.070500202354,1.070583400468,1.070665382116,1.070746146409,
	1.070825692454,1.070904019359,1.070981126227,1.071057012164,1.071131676269,
	1.071205117644,1.071277335388,1.071348328598,1.071418096370,1.071486637799,
	1.071553951977,1.071620037997,1.071684894950,1.071748521924,1.071810918007,
	1.071872082287,1.071932013848,1.071990711776,1.072048175153,1.072104403062,
	1.072159394583,1.072213148797,1.072265664782,1.072316941618,1.072366978379,
	1.072415774144,1.072463327987,1.072509638982,1.072554706204,1.072598528724,
	1.072641105616,1.072682435949,1.072722518796,1.072761353226,1.072798938309,
	1.072835273114,1.072870356708,1.072904188160,1.072936766538,1.072968090908,
	1.072998160338,1.073026973893,1.073054530640,1.073080829645,1.073105869973,
	1.073129650690,1.073152170861,1.073173429553,1.073193425829,1.073212158757,
	1.073229627400,1.073245830825,1.073260768098,1.073274438283,1.073286840449,
	1.073297973661,1.073307836985,1.073316429491,1.073323750244,1.073329798313,
	1.073334572768,1.073338072677,1.073340297111,1.073341245140,1.073340915837,
	1.073339308272,1.073336421520,1.073332254654,1.073326806750,1.073320076884,
	1.073312064133,1.073302767576,1.073292186291,1.073280319361,1.073267165866,
	1.073252724891,1.073236995520,1.073219976840,1.073201667940,1.073182067907,
	1.073161175835,1.073138990815,1.073115511944,1.073090738316,1.073064669032,
	1.073037303192,1.073008639897,1.072978678254,1.072947417370,1.072914856352,
	1.072880994314,1.072845830368,1.072809363632,1.072771593224,1.072732518266,
	1.072692137883,1.072650451200,1.072607457347,1.072563155458,1.072517544668,
	1.072470624116,1.072422392943,1.072372850293,1.072321995316,1.072269827163,
	1.072216344988,1.072161547949,1.072105435210,1.072048005934,1.071989259291,
	1.071929194455,1.071867810601,1.071805106912,1.071741082570,1.071675736766,
	1.071609068692,1.071541077546,1.071471762530,1.071401122848,1.071329157713,
	1.071255866338,1.071181247945,1.071105301757,1.071028027004,1.070949422921,
	1.070869488746,1.070788223725,1.070705627106,1.070621698146,1.070536436104,
	1.070449840246,1.070361909843,1.070272644173,1.070182042518,1.070090104167,
	1.069996828413,1.069902214558,1.069806261908,1.069708969776,1.069610337480,
	1.069510364346,1.069409049706,1.069306392898,1.069202393266,1.069097050164,
	1.068990362948,1.068882330986,1.068772953648,1.068662230316,1.068550160375,
	1.068436743220,1.068321978253,1.068205864882,1.068088402525,1.067969590605,
	1.067849428555,1.067727915816,1.067605051834,1.067480836068,1.067355267980,
	1.067228347044,1.067100072741,1.066970444560,1.066839462000,1.066707124569,
	1.066573431780,1.066438383160,1.066301978243,1.066164216570,1.066025097694,
	1.065884621176,1.065742786587,1.065599593508,1.065455041528,1.065309130248,
	1.065161859275,1.065013228231,1.064863236744,1.064711884454,1.064559171011,
	1.064405096075,1.064249659316,1.064092860417,1.063934699068,1.063775174973,
	1.063614287844,1.063452037407,1.063288423397,1.063123445561,1.062957103655,
	1.062789397451,1.062620326729,1.062449891281,1.062278090911,1.062104925435,
	1.061930394681,1.061754498489,1.061577236711,1.061398609210,1.061218615864,
	1.061037256560,1.060854531201,1.060670439701,1.060484981985,1.060298157993,
	1.060109967678,1.059920411005,1.059729487953,1.059537198513,1.059343542689,
	1.059148520502,1.058952131982,1.058754377174,1.058555256139,1.058354768949,
	1.058152915691,1.057949696466,1.057745111389,1.057539160588,1.057331844208,
	1.057123162406,1.056913115355,1.056701703241,1.056488926265,1.056274784644,
	1.056059278610,1.055842408406,1.055624174296,1.055404576555,1.055183615473,
	1.054961291358,1.054737604532,1.054512555332,1.054286144110,1.054058371235,
	1.053829237092,1.053598742080,1.053366886616,1.053133671131,1.052899096073,
	1.052663161905,1.052425869109,1.052187218181,1.051947209633,1.051705843995,
	1.051463121812,1.051219043648,1.050973610080,1.050726821704,1.050478679134,
	1.050229182998,1.049978333943,1.049726132632,1.049472579746,1.049217675982,
	1.048961422055,1.048703818697,1.048444866658,1.048184566703,1.047922919619,
	1.047659926206,1.047395587283,1.047129903689,1.046862876277,1.046594505920,
	1.046324793508,1.046053739950,1.045781346172,1.045507613118,1.045232541750,
	1.044956133047,1.044678388009,1.044399307652,1.044118893010,1.043837145136,
	1.043554065102,1.043269653997,1.042983912929,1.042696843024,1.042408445427,
	1.042118721302,1.041827671829,1.041535298210,1.041241601662,1.040946583425,
	1.040650244753,1.040352586922,1.040053611226,1.039753318975,1.039451711502,
	1.039148790156,1.038844556306,1.038539011339,1.038232156660,1.037923993696,
	1.037614523890,1.037303748704,1.036991669620,1.036678288139,1.036363605780,
	1.036047624081,1.035730344599,1.035411768911,1.035091898611,1.034770735313,
	1.034448280650,1.034124536273,1.033799503854,1.033473185082,1.033145581665,
	1.032816695330,1.032486527824,1.032155080911,1.031822356376,1.031488356021,
	1.031153081668,1.030816535157,1.030478718347,1.030139633116,1.029799281361,
	1.029457664998,1.029114785959,1.028770646199,1.028425247687,1.028078592416,
	1.027730682392,1.027381519643,1.027031106214,1.026679444171,1.026326535595,
	1.025972382588,1.025616987268,1.025260351773,1.024902478260,1.024543368903,
	1.024183025893,1.023821451442,1.023458647778,1.023094617148,1.022729361817,
	1.022362884066,1.021995186198,1.021626270529,1.021256139396,1.020884795154,
	1.020512240173,1.020138476842,1.019763507569,1.019387334777,1.019009960908,
	1.018631388421,1.018251619791,1.017870657513,1.017488504096,1.017105162068,
	1.016720633975,1.016334922376,1.015948029850,1.015559958993,1.015170712416,
	1.014780292747,1.014388702631,1.013995944730,1.013602021720,1.013206936296,
	1.012810691169,1.012413289063,1.012014732722,1.011615024902,1.011214168380,
	1.010812165942,1.010409020397,1.010004734563,1.009599311277,1.009192753392,
	1.008785063773,1.008376245304,1.007966300880,1.007555233415,1.007143045836,
	1.006729741083,1.006315322115,1.005899791901,1.005483153427,1.005065409693,
	1.004646563713,1.004226618515,1.003805577141,1.003383442648,1.002960218105,
	1.002535906597,1.002110511219,1.001684035084,1.001256481315,1.000827853049,
	1.000398153437,0.999967385642,0.999535552841,0.999102658222,0.998668704988,
	0.998233696353,0.997797635544,0.997360525800,0.996922370371,0.996483172522,
	0.996042935527,0.995601662674,0.995159357262,0.994716022600,0.994271662012,
	0.993826278829,0.993379876396,0.992932458069,0.992484027214,0.992034587209,
	0.991584141441,0.991132693308,0.990680246221,0.990226803597,0.989772368866,
	0.989316945469,0.988860536854,0.988403146480,0.987944777817,0.987485434343,
	0.987025119546,0.986563836923,0.986101589980,0.985638382233,0.985174217206,
	0.984709098431,0.984243029451,0.983776013816,0.983308055084,0.982839156821,
	0.982369322604,0.981898556013,0.981426860640,0.980954240084,0.980480697950,
	0.980006237851,0.979530863408,0.979054578249,0.978577386008,0.978099290328,
	0.977620294857,0.977140403250,0.976659619168,0.976177946280,0.975695388260,
	0.975211948789,0.974727631552,0.974242440242,0.973756378556,0.973269450200,
	0.972781658880,0.972293008312,0.971803502215,0.971313144313,0.970821938336,
	0.970329888019,0.969836997099,0.969343269321,0.968848708432,0.968353318185,
	0.967857102335,0.967360064643,0.966862208873,0.966363538793,0.965864058174,
	0.965363770792,0.964862680424,0.964360790853,0.963858105863,0.963354629241,
	0.962850364779,0.962345316270,0.961839487509,0.961332882295,0.960825504429,
	0.960317357714,0.959808445954,0.959298772958,0.958788342533,0.958277158491,
	0.957765224644,0.957252544806,0.956739122791,0.956224962417,0.955710067501,
	0.955194441861,0.954678089317,0.954161013689,0.953643218798,0.953124708466,
	0.952605486514,0.952085556765,0.951564923040,0.951043589163,0.950521558955,
	0.949998836239,0.949475424837,0.948951328571,0.948426551260,0.947901096727,
	0.947374968791,0.946848171270,0.946320707982,0.945792582745,0.945263799375,
	0.944734361685,0.944204273489,0.943673538598,0.943142160823,0.942610143971,
	0.942077491850,0.941544208264,0.941010297016,0.940475761905,0.939940606731,
	0.939404835290,0.938868451374,0.938331458776,0.937793861283,0.937255662681,
	0.936716866753,0.936177477279,0.935637498036,0.935096932798,0.934555785335,
	0.934014059416,0.933471758803,0.932928887257,0.932385448536,0.931841446392,
	0.931296884576,0.930751766831,0.930206096902,0.929659878524,0.929113115431,
	0.928565811353,0.928017970016,0.927469595138,0.926920690438,0.926371259626,
	0.925821306409,0.925270834490,0.924719847566,0.924168349330,0.923616343470,
	0.923063833667,0.922510823601,0.921957316942,0.921403317358,0.920848828511,
	0.920293854057,0.919738397646,0.919182462924,0.918626053530,0.918069173098,
	0.917511825256,0.916954013626,0.916395741825,0.915837013461,0.915277832140,
	0.914718201459,0.914158125010,0.913597606378,0.913036649142,0.912475256875,
	0.911913433143,0.911351181505,0.910788505515,0.910225408718,0.909661894654,
	0.909097966855,0.908533628848,0.907968884151,0.907403736277,0.906838188729,
	0.906272245007,0.905705908599,0.905139182991,0.904572071657,0.904004578066,
	0.903436705680,0.902868457954,0.902299838332,0.901730850254,0.901161497152,
	0.900591782449,0.900021709560,0.899451281895,0.898880502853,0.898309375828,
	0.897737904203,0.897166091355,0.896593940653,0.896021455458,0.895448639123,
	0.894875494992,0.894302026400,0.893728236677,0.893154129142,0.892579707107,
	0.892004973875,0.891429932741,0.890854586991,0.890278939903,0.889702994747,
	0.889126754784,0.888550223266,0.887973403437,0.887396298533,0.886818911779,
	0.886241246393,0.885663305585,0.885085092555,0.884506610494,0.883927862585,
	0.883348852001,0.882769581909,0.882190055462,0.881610275809,0.881030246088,
	0.880449969426,0.879869448945,0.879288687755,0.878707688958,0.878126455647,
	0.877544990904,0.876963297804,0.876381379412,0.875799238785,0.875216878968,
	0.874634303000,0.874051513907,0.873468514709,0.872885308415,0.872301898025,
	0.871718286530,0.871134476911,0.870550472140,0.869966275179,0.869381888981,
	0.868797316490,0.868212560640,0.867627624355,0.867042510549,0.866457222130,
	0.865871761992,0.865286133021,0.864700338095,0.864114380081,0.863528261836,
	0.862941986208,0.862355556035,0.861768974147,0.861182243361,0.860595366489,
	0.860008346328,0.859421185669,0.858833887294,0.858246453971,0.857658888462,
	0.857071193519,0.856483371882,0.855895426284,0.855307359447,0.854719174082,
	0.854130872893,0.853542458572,0.852953933802,0.852365301256,0.851776563599,
	0.851187723483,0.850598783554,0.850009746444,0.849420614778,0.848831391172,
	0.848242078229,0.847652678545,0.847063194706,0.846473629287,0.845883984853,
	0.845294263961,0.844704469156,0.844114602976
	}
};

double always_inline s03_stage3_negclip(double x) {
    double f = fabs(x);
    f = f * s03_stage3_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s03_stage3_neg_table.data[0];
    } else if (i >= s03_stage3_neg_table.size-1) {
        f = s03_stage3_neg_table.data[s03_stage3_neg_table.size-1];
    } else {
        f -= i;
        f = s03_stage3_neg_table.data[i]*(1-f) + s03_stage3_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}



// s01_stage1_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  6.397663
 // --table_op  1.000000

struct tables01_stage1_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables01_stage1_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables01_stage1_neg&() const { return *(tables01_stage1_neg*)this; }
};

static tables01_stage1_neg_imp<2048> s01_stage1_neg_table __rt_data = {
	0,10.6758,204.7,2048, {
	0.000000000000,0.044697475804,0.089341553496,0.133932017684,0.178468651887,
	0.222951238524,0.267379558914,0.311753393274,0.356072520714,0.400336719233,
	0.444545765717,0.488699435936,0.532797504540,0.576839745052,0.620825929872,
	0.664755830265,0.708629216365,0.752445857163,0.796205520513,0.839907973120,
	0.883552980540,0.927140307175,0.970669716271,1.014140969913,1.057553829018,
	1.100908053337,1.144203401445,1.187439630742,1.230616497445,1.273733756587,
	1.316791162008,1.359788466359,1.402725421088,1.445601776443,1.488417281465,
	1.531171683983,1.573864730611,1.616496166744,1.659065736550,1.701573182970,
	1.744018247712,1.786400671245,1.828720192795,1.870976550343,1.913169480615,
	1.955298719084,1.997363999959,2.039365056186,2.081301619439,2.123173420116,
	2.164980187337,2.206721648937,2.248397531459,2.290007560156,2.331551458977,
	2.373028950571,2.414439756276,2.455783596117,2.497060188801,2.538269251711,
	2.579410500901,2.620483651095,2.661488415675,2.702424506682,2.743291634810,
	2.784089509400,2.824817838434,2.865476328535,2.906064684955,2.946582611577,
	2.987029810907,3.027405984068,3.067710830799,3.107944049445,3.148105336958,
	3.188194388890,3.228210899386,3.268154561182,3.308025065601,3.347822102547,
	3.387545360501,3.427194526515,3.466769286212,3.506269323776,3.545694321954,
	3.585043962044,3.624317923900,3.663515885920,3.702637525047,3.741682516762,
	3.780650535084,3.819541252562,3.858354340275,3.897089467824,3.935746303336,
	3.974324513452,4.012823763329,4.051243716638,4.089584035557,4.127844380771,
	4.166024411468,4.204123785337,4.242142158567,4.280079185840,4.317934520337,
	4.355707813727,4.393398716172,4.431006876324,4.468531941320,4.505973556785,
	4.543331366830,4.580605014050,4.617794139525,4.654898382819,4.691917381978,
	4.728850773533,4.765698192501,4.802459272382,4.839133645161,4.875720941313,
	4.912220789799,4.948632818071,4.984956652073,5.021191916243,5.057338233518,
	5.093395225334,5.129362511629,5.165239710851,5.201026439958,5.236722314423,
	5.272326948239,5.307839953928,5.343260942537,5.378589523657,5.413825305416,
	5.448967894498,5.484016896141,5.518971914150,5.553832550902,5.588598407359,
	5.623269083073,5.657844176196,5.692323283496,5.726706000358,5.760991920806,
	5.795180637505,5.829271741782,5.863264823634,5.897159471744,5.930955273492,
	5.964651814977,5.998248681025,6.031745455210,6.065141719870,6.098437056124,
	6.131631043892,6.164723261912,6.197713287764,6.230600697887,6.263385067601,
	6.296065971132,6.328642981634,6.361115671212,6.393483610947,6.425746370926,
	6.457903520263,6.489954627131,6.521899258788,6.553736981611,6.585467361120,
	6.617089962016,6.648604348211,6.680010082862,6.711306728405,6.742493846593,
	6.773570998534,6.804537744724,6.835393645094,6.866138259042,6.896771145485,
	6.927291862892,6.957699969336,6.987995022535,7.018176579902,7.048244198590,
	7.078197435545,7.108035847555,7.137758991304,7.167366423422,7.196857700545,
	7.226232379369,7.255490016708,7.284630169555,7.313652395143,7.342556251005,
	7.371341295044,7.400007085592,7.428553181483,7.456979142120,7.485284527544,
	7.513468898511,7.541531816562,7.569472844100,7.597291544467,7.624987482027,
	7.652560222242,7.680009331758,7.707334378488,7.734534931700,7.761610562105,
	7.788560841946,7.815385345092,7.842083647130,7.868655325460,7.895099959397,
	7.921417130265,7.947606421505,7.973667418770,7.999599710038,8.025402885715,
	8.051076538746,8.076620264727,8.102033662013,8.127316331839,8.152467878435,
	8.177487909143,8.202376034540,8.227131868560,8.251755028619,8.276245135741,
	8.300601814685,8.324824694078,8.348913406547,8.372867588851,8.396686882018,
	8.420370931482,8.443919387222,8.467331903906,8.490608141030,8.513747763065,
	8.536750439601,8.559615845497,8.582343661028,8.604933572038,8.627385270092,
	8.649698452626,8.671872823107,8.693908091186,8.715803972858,8.737560190619,
	8.759176473624,8.780652557853,8.801988186268,8.823183108979,8.844237083407,
	8.865149874444,8.885921254625,8.906551004289,8.927038911746,8.947384773443,
	8.967588394130,8.987649587030,9.007568174001,9.027343985708,9.046976861783,
	9.066466650999,9.085813211429,9.105016410615,9.124076125733,9.142992243756,
	9.161764661615,9.180393286363,9.198878035337,9.217218836314,9.235415627672,
	9.253468358544,9.271376988971,9.289141490060,9.306761844130,9.324238044859,
	9.341570097433,9.358758018687,9.375801837247,9.392701593666,9.409457340557,
	9.426069142727,9.442537077304,9.458861233858,9.475041714525,9.491078634122,
	9.506972120259,9.522722313446,9.538329367199,9.553793448136,9.569114736076,
	9.584293424121,9.599329718746,9.614223839877,9.628976020961,9.643586509038,
	9.658055564801,9.672383462653,9.686570490757,9.700616951079,9.714523159430,
	9.728289445492,9.741916152844,9.755403638984,9.768752275338,9.781962447261,
	9.795034554040,9.807969008881,9.820766238894,9.833426685067,9.845950802236,
	9.858339059045,9.870591937901,9.882709934917,9.894693559854,9.906543336052,
	9.918259800348,9.929843502998,9.941295007581,9.952614890900,9.963803742874,
	9.974862166426,9.985790777355,9.996590204211,10.007261088153,10.017804082805,
	10.028219854107,10.038509080149,10.048672451007,10.058710668569,10.068624446353,
	10.078414509318,10.088081593670,10.097626446660,10.107049826377,10.116352501529,
	10.125535251230,10.134598864767,10.143544141369,10.152371889971,10.161082928967,
	10.169678085966,10.178158197532,10.186524108933,10.194776673869,10.202916754213,
	10.210945219734,10.218862947823,10.226670823214,10.234369737702,10.241960589857,
	10.249444284734,10.256821733586,10.264093853566,10.271261567433,10.278325803258,
	10.285287494120,10.292147577808,10.298906996523,10.305566696571,10.312127628064,
	10.318590744618,10.324957003046,10.331227363063,10.337402786978,10.343484239398,
	10.349472686926,10.355369097864,10.361174441913,10.366889689886,10.372515813407,
	10.378053784626,10.383504575928,10.388869159650,10.394148507800,10.399343591775,
	10.404455382086,10.409484848090,10.414432957717,10.419300677209,10.424088970857,
	10.428798800748,10.433431126514,10.437986905083,10.442467090436,10.446872633374,
	10.451204481283,10.455463577907,10.459650863126,10.463767272740,10.467813738259,
	10.471791186695,10.475700540363,10.479542716687,10.483318628009,10.487029181409,
	10.490675278525,10.494257815384,10.497777682233,10.501235763382,10.504632937049,
	10.507970075212,10.511248043467,10.514467700890,10.517629899910,10.520735486180,
	10.523785298462,10.526780168512,10.529720920971,10.532608373268,10.535443335518,
	10.538226610437,10.540958993254,10.543641271630,10.546274225588,10.548858627442,
	10.551395241732,10.553884825168,10.556328126577,10.558725886851,10.561078838906,
	10.563387707644,10.565653209919,10.567876054505,10.570056942073,10.572196565173,
	10.574295608211,10.576354747446,10.578374650975,10.580355978732,10.582299382488,
	10.584205505855,10.586074984294,10.587908445122,10.589706507534,10.591469782614,
	10.593198873359,10.594894374702,10.596556873543,10.598186948774,10.599785171314,
	10.601352104146,10.602888302355,10.604394313166,10.605870675989,10.607317922467,
	10.608736576518,10.610127154391,10.611490164711,10.612826108538,10.614135479421,
	10.615418763454,10.616676439335,10.617908978427,10.619116844818,10.620300495387,
	10.621460379867,10.622596940907,10.623710614145,10.624801828271,10.625871005097,
	10.626918559627,10.627944900127,10.628950428194,10.629935538833,10.630900620523,
	10.631846055294,10.632772218799,10.633679480388,10.634568203182,10.635438744147,
	10.636291454170,10.637126678133,10.637944754986,10.638746017828,10.639530793975,
	10.640299405041,10.641052167008,10.641789390305,10.642511379884,10.643218435288,
	10.643910850734,10.644588915179,10.645252912404,10.645903121076,10.646539814832,
	10.647163262346,10.647773727404,10.648371468974,10.648956741280,10.649529793875,
	10.650090871706,10.650640215190,10.651178060283,10.651704638545,10.652220177214,
	10.652724899272,10.653219023511,10.653702764603,10.654176333163,10.654639935820,
	10.655093775274,10.655538050367,10.655972956145,10.656398683919,10.656815421330,
	10.657223352409,10.657622657637,10.658013514010,10.658396095092,10.658770571078,
	10.659137108851,10.659495872040,10.659847021074,10.660190713242,10.660527102745,
	10.660856340753,10.661178575455,10.661493952116,10.661802613127,10.662104698057,
	10.662400343705,10.662689684147,10.662972850790,10.663249972415,10.663521175232,
	10.663786582920,10.664046316679,10.664300495273,10.664549235075,10.664792650115,
	10.665030852117,10.665263950551,10.665492052668,10.665715263543,10.665933686121,
	10.666147421252,10.666356567731,10.666561222343,10.666761479893,10.666957433250,
	10.667149173382,10.667336789393,10.667520368560,10.667699996364,10.667875756531,
	10.668047731062,10.668216000268,10.668380642802,10.668541735692,10.668699354375,
	10.668853572724,10.669004463082,10.669152096292,10.669296541723,10.669437867306,
	10.669576139557,10.669711423605,10.669843783224,10.669973280857,10.670099977641,
	10.670223933437,10.670345206854,10.670463855274,10.670579934874,10.670693500656,
	10.670804606466,10.670913305020,10.671019647925,10.671123685703,10.671225467812,
	10.671325042668,10.671422457667,10.671517759204,10.671610992695,10.671702202597,
	10.671791432426,10.671878724778,10.671964121348,10.672047662947,10.672129389521,
	10.672209340170,10.672287553162,10.672364065955,10.672438915209,10.672512136806,
	10.672583765865,10.672653836756,10.672722383120,10.672789437878,10.672855033252,
	10.672919200775,10.672981971308,10.673043375054,10.673103441569,10.673162199779,
	10.673219677991,10.673275903908,10.673330904637,10.673384706708,10.673437336081,
	10.673488818161,10.673539177807,10.673588439346,10.673636626584,10.673683762813,
	10.673729870829,10.673774972935,10.673819090957,10.673862246250,10.673904459712,
	10.673945751790,10.673986142492,10.674025651394,10.674064297652,10.674102100008,
	10.674139076802,10.674175245977,10.674210625090,10.674245231318,10.674279081471,
	10.674312191992,10.674344578971,10.674376258152,10.674407244936,10.674437554393,
	10.674467201267,10.674496199984,10.674524564657,10.674552309095,10.674579446806,
	10.674605991008,10.674631954632,10.674657350328,10.674682190476,10.674706487182,
	10.674730252294,10.674753497402,10.674776233845,10.674798472716,10.674820224867,
	10.674841500915,10.674862311246,10.674882666023,10.674902575186,10.674922048459,
	10.674941095357,10.674959725187,10.674977947055,10.674995769866,10.675013202336,
	10.675030252988,10.675046930162,10.675063242015,10.675079196528,10.675094801508,
	10.675110064591,10.675124993249,10.675139594790,10.675153876364,10.675167844963,
	10.675181507430,10.675194870457,10.675207940591,10.675220724236,10.675233227657,
	10.675245456982,10.675257418206,10.675269117192,10.675280559678,10.675291751274,
	10.675302697469,10.675313403633,10.675323875018,10.675334116762,10.675344133890,
	10.675353931317,10.675363513854,10.675372886203,10.675382052966,10.675391018644,
	10.675399787639,10.675408364257,10.675416752711,10.675424957122,10.675432981519,
	10.675440829846,10.675448505959,10.675456013629,10.675463356547,10.675470538322,
	10.675477562484,10.675484432485,10.675491151705,10.675497723446,10.675504150940,
	10.675510437349,10.675516585764,10.675522599209,10.675528480643,10.675534232959,
	10.675539858987,10.675545361497,10.675550743194,10.675556006729,10.675561154691,
	10.675566189615,10.675571113979,10.675575930208,10.675580640672,10.675585247691,
	10.675589753533,10.675594160418,10.675598470516,10.675602685950,10.675606808795,
	10.675610841084,10.675614784802,10.675618641892,10.675622414256,10.675626103751,
	10.675629712195,10.675633241368,10.675636693008,10.675640068817,10.675643370459,
	10.675646599560,10.675649757714,10.675652846476,10.675655867371,10.675658821887,
	10.675661711481,10.675664537578,10.675667301572,10.675670004827,10.675672648675,
	10.675675234420,10.675677763339,10.675680236678,10.675682655657,10.675685021471,
	10.675687335287,10.675689598245,10.675691811464,10.675693976034,10.675696093025,
	10.675698163481,10.675700188423,10.675702168852,10.675704105745,10.675706000058,
	10.675707852726,10.675709664664,10.675711436767,10.675713169909,10.675714864946,
	10.675716522715,10.675718144035,10.675719729706,10.675721280512,10.675722797218,
	10.675724280574,10.675725731312,10.675727150148,10.675728537785,10.675729894906,
	10.675731222183,10.675732520272,10.675733789813,10.675735031434,10.675736245749,
	10.675737433357,10.675738594845,10.675739730788,10.675740841746,10.675741928269,
	10.675742990894,10.675744030145,10.675745046538,10.675746040573,10.675747012743,
	10.675747963528,10.675748893398,10.675749802812,10.675750692221,10.675751562064,
	10.675752412772,10.675753244764,10.675754058452,10.675754854239,10.675755632518,
	10.675756393674,10.675757138084,10.675757866115,10.675758578128,10.675759274475,
	10.675759955500,10.675760621540,10.675761272925,10.675761909977,10.675762533011,
	10.675763142335,10.675763738251,10.675764321053,10.675764891031,10.675765448465,
	10.675765993632,10.675766526802,10.675767048238,10.675767558199,10.675768056936,
	10.675768544697,10.675769021723,10.675769488250,10.675769944509,10.675770390726,
	10.675770827122,10.675771253912,10.675771671309,10.675772079518,10.675772478742,
	10.675772869178,10.675773251020,10.675773624457,10.675773989673,10.675774346850,
	10.675774696164,10.675775037789,10.675775371892,10.675775698641,10.675776018197,
	10.675776330717,10.675776636357,10.675776935269,10.675777227599,10.675777513493,
	10.675777793093,10.675778066537,10.675778333961,10.675778595496,10.675778851273,
	10.675779101419,10.675779346056,10.675779585307,10.675779819289,10.675780048120,
	10.675780271911,10.675780490775,10.675780704819,10.675780914150,10.675781118871,
	10.675781319084,10.675781514888,10.675781706379,10.675781893654,10.675782076805,
	10.675782255921,10.675782431094,10.675782602408,10.675782769949,10.675782933800,
	10.675783094043,10.675783250756,10.675783404018,10.675783553904,10.675783700488,
	10.675783843844,10.675783984043,10.675784121153,10.675784255243,10.675784386380,
	10.675784514627,10.675784640050,10.675784762710,10.675784882668,10.675784999984,
	10.675785114715,10.675785226919,10.675785336651,10.675785443965,10.675785548916,
	10.675785651554,10.675785751931,10.675785850097,10.675785946100,10.675786039988,
	10.675786131807,10.675786221604,10.675786309422,10.675786395305,10.675786479295,
	10.675786561436,10.675786641766,10.675786720326,10.675786797156,10.675786872292,
	10.675786945773,10.675787017635,10.675787087913,10.675787156642,10.675787223857,
	10.675787289591,10.675787353877,10.675787416745,10.675787478228,10.675787538357,
	10.675787597160,10.675787654667,10.675787710907,10.675787765908,10.675787819696,
	10.675787872299,10.675787923743,10.675787974052,10.675788023253,10.675788071370,
	10.675788118426,10.675788164445,10.675788209450,10.675788253462,10.675788296505,
	10.675788338598,10.675788379764,10.675788420023,10.675788459394,10.675788497897,
	10.675788535552,10.675788572377,10.675788608389,10.675788643608,10.675788678051,
	10.675788711734,10.675788744675,10.675788776889,10.675788808393,10.675788839203,
	10.675788869334,10.675788898800,10.675788927617,10.675788955798,10.675788983358,
	10.675789010311,10.675789036669,10.675789062446,10.675789087654,10.675789112307,
	10.675789136417,10.675789159994,10.675789183052,10.675789205602,10.675789227654,
	10.675789249220,10.675789270310,10.675789290935,10.675789311106,10.675789330832,
	10.675789350123,10.675789368988,10.675789387437,10.675789405480,10.675789423124,
	10.675789440380,10.675789457255,10.675789473758,10.675789489897,10.675789505680,
	10.675789521114,10.675789536209,10.675789550970,10.675789565406,10.675789579524,
	10.675789593330,10.675789606832,10.675789620036,10.675789632949,10.675789645577,
	10.675789657926,10.675789670003,10.675789681813,10.675789693364,10.675789704659,
	10.675789715705,10.675789726507,10.675789737072,10.675789747403,10.675789757506,
	10.675789767386,10.675789777049,10.675789786498,10.675789795739,10.675789804776,
	10.675789813613,10.675789822256,10.675789830708,10.675789838973,10.675789847057,
	10.675789854961,10.675789862692,10.675789870252,10.675789877645,10.675789884875,
	10.675789891945,10.675789898859,10.675789905621,10.675789912234,10.675789918701,
	10.675789925025,10.675789931209,10.675789937257,10.675789943172,10.675789948956,
	10.675789954613,10.675789960144,10.675789965554,10.675789970844,10.675789976017,
	10.675789981077,10.675789986024,10.675789990863,10.675789995595,10.675790000222,
	10.675790004747,10.675790009172,10.675790013500,10.675790017732,10.675790021871,
	10.675790025918,10.675790029876,10.675790033747,10.675790037532,10.675790041234,
	10.675790044854,10.675790048394,10.675790051856,10.675790055241,10.675790058552,
	10.675790061790,10.675790064956,10.675790068053,10.675790071081,10.675790074042,
	10.675790076938,10.675790079770,10.675790082539,10.675790085247,10.675790087896,
	10.675790090486,10.675790093019,10.675790095496,10.675790097918,10.675790100287,
	10.675790102603,10.675790104868,10.675790107084,10.675790109250,10.675790111369,
	10.675790113440,10.675790115467,10.675790117448,10.675790119385,10.675790121280,
	10.675790123133,10.675790124945,10.675790126717,10.675790128450,10.675790130145,
	10.675790131802,10.675790133423,10.675790135008,10.675790136558,10.675790138073,
	10.675790139555,10.675790141005,10.675790142422,10.675790143808,10.675790145164,
	10.675790146490,10.675790147786,10.675790149054,10.675790150293,10.675790151506,
	10.675790152691,10.675790153850,10.675790154984,10.675790156093,10.675790157177,
	10.675790158237,10.675790159274,10.675790160288,10.675790161280,10.675790162249,
	10.675790163198,10.675790164125,10.675790165032,10.675790165919,10.675790166786,
	10.675790167634,10.675790168463,10.675790169274,10.675790170067,10.675790170843,
	10.675790171601,10.675790172343,10.675790173068,10.675790173778,10.675790174471,
	10.675790175150,10.675790175813,10.675790176461,10.675790177096,10.675790177716,
	10.675790178323,10.675790178916,10.675790179496,10.675790180063,10.675790180618,
	10.675790181161,10.675790181691,10.675790182210,10.675790182717,10.675790183213,
	10.675790183698,10.675790184173,10.675790184637,10.675790185090,10.675790185534,
	10.675790185968,10.675790186392,10.675790186807,10.675790187213,10.675790187610,
	10.675790187998,10.675790188377,10.675790188748,10.675790189111,10.675790189466,
	10.675790189813,10.675790190152,10.675790190484,10.675790190809,10.675790191126,
	10.675790191436,10.675790191740,10.675790192036,10.675790192327,10.675790192610,
	10.675790192888,10.675790193159,10.675790193425,10.675790193684,10.675790193938,
	10.675790194186,10.675790194429,10.675790194666,10.675790194898,10.675790195125,
	10.675790195347,10.675790195564,10.675790195776,10.675790195984,10.675790196187,
	10.675790196385,10.675790196579,10.675790196769,10.675790196954,10.675790197136,
	10.675790197313,10.675790197487,10.675790197657,10.675790197823,10.675790197985,
	10.675790198144,10.675790198299,10.675790198451,10.675790198599,10.675790198744,
	10.675790198886,10.675790199025,10.675790199160,10.675790199293,10.675790199423,
	10.675790199550,10.675790199674,10.675790199795,10.675790199914,10.675790200030,
	10.675790200143,10.675790200254,10.675790200363,10.675790200469,10.675790200573,
	10.675790200674,10.675790200774,10.675790200871,10.675790200966,10.675790201058,
	10.675790201149,10.675790201238,10.675790201325,10.675790201409,10.675790201492,
	10.675790201574,10.675790201653,10.675790201731,10.675790201806,10.675790201881,
	10.675790201953,10.675790202024,10.675790202093,10.675790202161,10.675790202228,
	10.675790202293,10.675790202356,10.675790202418,10.675790202479,10.675790202538,
	10.675790202596,10.675790202653,10.675790202708,10.675790202763,10.675790202816,
	10.675790202867,10.675790202918,10.675790202968,10.675790203016,10.675790203064,
	10.675790203110,10.675790203156,10.675790203200,10.675790203243,10.675790203286,
	10.675790203327,10.675790203368,10.675790203407,10.675790203446,10.675790203484,
	10.675790203521,10.675790203557,10.675790203593,10.675790203628,10.675790203662,
	10.675790203695,10.675790203727,10.675790203759,10.675790203790,10.675790203820,
	10.675790203850,10.675790203879,10.675790203907,10.675790203935,10.675790203962,
	10.675790203989,10.675790204014,10.675790204040,10.675790204065,10.675790204089,
	10.675790204113,10.675790204136,10.675790204158,10.675790204181,10.675790204202,
	10.675790204223,10.675790204244,10.675790204265,10.675790204284,10.675790204304,
	10.675790204323,10.675790204341,10.675790204359,10.675790204377,10.675790204394,
	10.675790204411,10.675790204428,10.675790204444,10.675790204460,10.675790204475,
	10.675790204491,10.675790204505,10.675790204520,10.675790204534,10.675790204548,
	10.675790204561,10.675790204575,10.675790204588,10.675790204600,10.675790204613,
	10.675790204625,10.675790204637,10.675790204648,10.675790204660,10.675790204671,
	10.675790204682,10.675790204692,10.675790204703,10.675790204713,10.675790204723,
	10.675790204732,10.675790204742,10.675790204751,10.675790204760,10.675790204769,
	10.675790204778,10.675790204786,10.675790204794,10.675790204802,10.675790204810,
	10.675790204818,10.675790204826,10.675790204833,10.675790204840,10.675790204847,
	10.675790204854,10.675790204861,10.675790204868,10.675790204874,10.675790204880,
	10.675790204887,10.675790204893,10.675790204899,10.675790204904,10.675790204910,
	10.675790204916,10.675790204921,10.675790204926,10.675790204931,10.675790204937,
	10.675790204941,10.675790204946,10.675790204951,10.675790204956,10.675790204960,
	10.675790204965,10.675790204969,10.675790204973,10.675790204977,10.675790204981,
	10.675790204985,10.675790204989,10.675790204993,10.675790204997,10.675790205000,
	10.675790205004,10.675790205007,10.675790205011,10.675790205014,10.675790205017,
	10.675790205020,10.675790205023,10.675790205026,10.675790205029,10.675790205032,
	10.675790205035,10.675790205038,10.675790205041,10.675790205043,10.675790205046,
	10.675790205048,10.675790205051,10.675790205053,10.675790205056,10.675790205058,
	10.675790205060,10.675790205062,10.675790205065,10.675790205067,10.675790205069,
	10.675790205071,10.675790205073,10.675790205075,10.675790205077,10.675790205078,
	10.675790205080,10.675790205082,10.675790205084,10.675790205085,10.675790205087,
	10.675790205089,10.675790205090,10.675790205092,10.675790205093,10.675790205095,
	10.675790205096,10.675790205098,10.675790205099,10.675790205100,10.675790205102,
	10.675790205103,10.675790205104,10.675790205105,10.675790205107,10.675790205108,
	10.675790205109,10.675790205110,10.675790205111,10.675790205112,10.675790205113,
	10.675790205114,10.675790205115,10.675790205116,10.675790205117,10.675790205118,
	10.675790205119,10.675790205120,10.675790205121,10.675790205122,10.675790205123,
	10.675790205123,10.675790205124,10.675790205125,10.675790205126,10.675790205127,
	10.675790205127,10.675790205128,10.675790205129,10.675790205129,10.675790205130,
	10.675790205131,10.675790205131,10.675790205132,10.675790205133,10.675790205133,
	10.675790205134,10.675790205134,10.675790205135,10.675790205136,10.675790205136,
	10.675790205137,10.675790205137,10.675790205138,10.675790205138,10.675790205139,
	10.675790205139,10.675790205140,10.675790205140,10.675790205140,10.675790205141,
	10.675790205141,10.675790205142,10.675790205142,10.675790205142,10.675790205143,
	10.675790205143,10.675790205144,10.675790205144,10.675790205144,10.675790205145,
	10.675790205145,10.675790205145,10.675790205146,10.675790205146,10.675790205146,
	10.675790205147,10.675790205147,10.675790205147,10.675790205147,10.675790205148,
	10.675790205148,10.675790205148,10.675790205148,10.675790205149,10.675790205149,
	10.675790205149,10.675790205149,10.675790205150,10.675790205150,10.675790205150,
	10.675790205150,10.675790205151,10.675790205151,10.675790205151,10.675790205151,
	10.675790205151,10.675790205152,10.675790205152,10.675790205152,10.675790205152,
	10.675790205152,10.675790205152,10.675790205153,10.675790205153,10.675790205153,
	10.675790205153,10.675790205153,10.675790205153,10.675790205153,10.675790205154,
	10.675790205154,10.675790205154,10.675790205154,10.675790205154,10.675790205154,
	10.675790205154,10.675790205155,10.675790205155,10.675790205155,10.675790205155,
	10.675790205155,10.675790205155,10.675790205155,10.675790205155,10.675790205155,
	10.675790205155,10.675790205156,10.675790205156,10.675790205156,10.675790205156,
	10.675790205156,10.675790205156,10.675790205156,10.675790205156,10.675790205156,
	10.675790205156,10.675790205156,10.675790205157,10.675790205157,10.675790205157,
	10.675790205157,10.675790205157,10.675790205157,10.675790205157,10.675790205157,
	10.675790205157,10.675790205157,10.675790205157,10.675790205157,10.675790205157,
	10.675790205157,10.675790205157,10.675790205157,10.675790205158,10.675790205158,
	10.675790205158,10.675790205158,10.675790205158,10.675790205158,10.675790205158,
	10.675790205158,10.675790205158,10.675790205158,10.675790205158,10.675790205158,
	10.675790205158,10.675790205158,10.675790205158,10.675790205158,10.675790205158,
	10.675790205158,10.675790205158,10.675790205158,10.675790205158,10.675790205158,
	10.675790205158,10.675790205158,10.675790205158,10.675790205158,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205159,
	10.675790205159,10.675790205159,10.675790205159,10.675790205159,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160,10.675790205160,10.675790205160,
	10.675790205160,10.675790205160,10.675790205160
	}
};

double always_inline s01_stage1_negclip(double x) {
    double f = fabs(x);
    f = f * s01_stage1_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s01_stage1_neg_table.data[0];
    } else if (i >= s01_stage1_neg_table.size-1) {
        f = s01_stage1_neg_table.data[s01_stage1_neg_table.size-1];
    } else {
        f -= i;
        f = s01_stage1_neg_table.data[i]*(1-f) + s01_stage1_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}


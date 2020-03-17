
// c04_stage3_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  1.309454
 // --table_op  1.000000

struct tablec04_stage3_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tablec04_stage3_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tablec04_stage3_neg&() const { return *(tablec04_stage3_neg*)this; }
};

static tablec04_stage3_neg_imp<2048> c04_stage3_neg_table __rt_data = {
	0,0.360581,204.7,2048, {
	0.000000000000,0.000875330358,0.002755043950,0.004781834503,0.006827384523,
	0.008872494681,0.010914291257,0.012952342891,0.014986583605,0.017017002086,
	0.019043595201,0.021066361044,0.023085297897,0.025100404070,0.027111677883,
	0.029119117658,0.031122721721,0.033122488400,0.035118416025,0.037110502932,
	0.039098747455,0.041083147932,0.043063702706,0.045040410116,0.047013268509,
	0.048982276230,0.050947431628,0.052908733050,0.054866178848,0.056819767374,
	0.058769496981,0.060715366022,0.062657372854,0.064595515832,0.066529793312,
	0.068460203651,0.070386745207,0.072309416338,0.074228215401,0.076143140755,
	0.078054190758,0.079961363769,0.081864658143,0.083764072240,0.085659604417,
	0.087551253028,0.089439016432,0.091322892982,0.093202881032,0.095078978937,
	0.096951185048,0.098819497716,0.100683915292,0.102544436122,0.104401058556,
	0.106253780937,0.108102601611,0.109947518918,0.111788531200,0.113625636794,
	0.115458834038,0.117288121266,0.119113496809,0.120934958999,0.122752506162,
	0.124566136624,0.126375848708,0.128181640734,0.129983511019,0.131781457880,
	0.133575479627,0.135365574570,0.137151741016,0.138933977267,0.140712281625,
	0.142486652387,0.144257087845,0.146023586292,0.147786146015,0.149544765298,
	0.151299442421,0.153050175662,0.154796963294,0.156539803587,0.158278694808,
	0.160013635219,0.161744623079,0.163471656644,0.165194734164,0.166913853887,
	0.168629014056,0.170340212911,0.172047448688,0.173750719616,0.175450023925,
	0.177145359837,0.178836725571,0.180524119342,0.182207539360,0.183886983832,
	0.185562450960,0.187233938942,0.188901445971,0.190564970236,0.192224509923,
	0.193880063212,0.195531628278,0.197179203294,0.198822786426,0.200462375839,
	0.202097969689,0.203729566131,0.205357163316,0.206980759387,0.208600352486,
	0.210215940749,0.211827522308,0.213435095292,0.215038657822,0.216638208018,
	0.218233743994,0.219825263860,0.221412765723,0.222996247683,0.224575707839,
	0.226151144282,0.227722555102,0.229289938384,0.230853292207,0.232412614649,
	0.233967903781,0.235519157672,0.237066374386,0.238609551984,0.240148688521,
	0.241683782050,0.243214830621,0.244741832278,0.246264785063,0.247783687013,
	0.249298536163,0.250809330544,0.252316068183,0.253818747103,0.255317365327,
	0.256811920870,0.258302411749,0.259788835974,0.261271191555,0.262749476496,
	0.264223688801,0.265693826471,0.267159887502,0.268621869891,0.270079771631,
	0.271533590712,0.272983325123,0.274428972851,0.275870531881,0.277308000195,
	0.278741375776,0.280170656602,0.281595840654,0.283016925907,0.284433910338,
	0.285846791923,0.287255568636,0.288660238450,0.290060799339,0.291457249275,
	0.292849586231,0.294237808180,0.295621913095,0.297001898947,0.298377763712,
	0.299749505362,0.301117121873,0.302480611221,0.303839971383,0.305195200336,
	0.306546296061,0.307893256541,0.309236079758,0.310574763698,0.311909306351,
	0.313239705706,0.314565959757,0.315888066502,0.317206023940,0.318519830076,
	0.319829482915,0.321134980470,0.322436320756,0.323733501792,0.325026521605,
	0.326315378222,0.327600069680,0.328880594018,0.330156949284,0.331429133527,
	0.332697144809,0.333960981193,0.335220640751,0.336476121563,0.337727421715,
	0.338974539302,0.340217472426,0.341456219199,0.342690777739,0.343921146175,
	0.345147322645,0.346369305297,0.347587092288,0.348800681786,0.350010071970,
	0.351215261029,0.352416247164,0.353613028589,0.354805603527,0.355993970216,
	0.357178126906,0.358358071860,0.359533803355,0.360705319682,0.361872619146,
	0.363035700067,0.364194560780,0.365349199634,0.366499614998,0.367645805253,
	0.368787768799,0.369925504054,0.371059009451,0.372188283443,0.373313324501,
	0.374434131116,0.375550701797,0.376663035072,0.377771129492,0.378874983626,
	0.379974596068,0.381069965429,0.382161090345,0.383247969475,0.384330601500,
	0.385408985125,0.386483119078,0.387553002115,0.388618633014,0.389680010580,
	0.390737133643,0.391790001061,0.392838611719,0.393882964530,0.394923058435,
	0.395958892403,0.396990465433,0.398017776556,0.399040824830,0.400059609347,
	0.401074129228,0.402084383628,0.403090371735,0.404092092770,0.405089545986,
	0.406082730674,0.407071646158,0.408056291797,0.409036666988,0.410012771165,
	0.410984603797,0.411952164395,0.412915452506,0.413874467716,0.414829209654,
	0.415779677986,0.416725872422,0.417667792712,0.418605438651,0.419538810074,
	0.420467906862,0.421392728941,0.422313276279,0.423229548894,0.424141546847,
	0.425049270248,0.425952719253,0.426851894070,0.427746794952,0.428637422204,
	0.429523776181,0.430405857289,0.431283665987,0.432157202785,0.433026468247,
	0.433891462989,0.434752187686,0.435608643064,0.436460829906,0.437308749053,
	0.438152401403,0.438991787910,0.439826909590,0.440657767515,0.441484362820,
	0.442306696701,0.443124770412,0.443938585272,0.444748142664,0.445553444032,
	0.446354490887,0.447151284801,0.447943827417,0.448732120441,0.449516165647,
	0.450295964877,0.451071520041,0.451842833119,0.452609906161,0.453372741287,
	0.454131340689,0.454885706630,0.455635841447,0.456381747550,0.457123427423,
	0.457860883624,0.458594118788,0.459323135624,0.460047936919,0.460768525539,
	0.461484904425,0.462197076598,0.462905045160,0.463608813291,0.464308384253,
	0.465003761388,0.465694948121,0.466381947959,0.467064764493,0.467743401397,
	0.468417862430,0.469088151436,0.469754272345,0.470416229171,0.471074026018,
	0.471727667076,0.472377156622,0.473022499022,0.473663698733,0.474300760298,
	0.474933688354,0.475562487626,0.476187162931,0.476807719178,0.477424161367,
	0.478036494592,0.478644724039,0.479248854989,0.479848892816,0.480444842989,
	0.481036711072,0.481624502722,0.482208223696,0.482787879844,0.483363477114,
	0.483935021550,0.484502519293,0.485065976583,0.485625399758,0.486180795252,
	0.486732169601,0.487279529436,0.487822881490,0.488362232595,0.488897589681,
	0.489428959781,0.489956350024,0.490479767644,0.490999219971,0.491514714440,
	0.492026258582,0.492533860034,0.493037526531,0.493537265910,0.494033086109,
	0.494524995168,0.495013001228,0.495497112533,0.495977337426,0.496453684353,
	0.496926161861,0.497394778600,0.497859543320,0.498320464872,0.498777552209,
	0.499230814385,0.499680260557,0.500125899979,0.500567742010,0.501005796106,
	0.501440071825,0.501870578827,0.502297326868,0.502720325808,0.503139585603,
	0.503555116310,0.503966928085,0.504375031181,0.504779435949,0.505180152841,
	0.505577192404,0.505970565281,0.506360282213,0.506746354037,0.507128791687,
	0.507507606189,0.507882808665,0.508254410333,0.508622422502,0.508986856576,
	0.509347724049,0.509705036510,0.510058805636,0.510409043197,0.510755761051,
	0.511098971146,0.511438685519,0.511774916295,0.512107675684,0.512436975984,
	0.512762829578,0.513085248935,0.513404246605,0.513719835223,0.514032027506,
	0.514340836252,0.514646274340,0.514948354727,0.515247090451,0.515542494626,
	0.515834580443,0.516123361168,0.516408850144,0.516691060785,0.516970006579,
	0.517245701086,0.517518157937,0.517787390830,0.518053413535,0.518316239887,
	0.518575883788,0.518832359204,0.519085680168,0.519335860772,0.519582915173,
	0.519826857586,0.520067702287,0.520305463610,0.520540155944,0.520771793735,
	0.521000391485,0.521225963747,0.521448525125,0.521668090277,0.521884673908,
	0.522098290772,0.522308955668,0.522516683443,0.522721488987,0.522923387233,
	0.523122393155,0.523318521768,0.523511788125,0.523702207317,0.523889794471,
	0.524074564749,0.524256533346,0.524435715490,0.524612126438,0.524785781478,
	0.524956695925,0.525124885120,0.525290364431,0.525453149248,0.525613254985,
	0.525770697074,0.525925490970,0.526077652145,0.526227196086,0.526374138299,
	0.526518494301,0.526660279623,0.526799509806,0.526936200403,0.527070366974,
	0.527202025087,0.527331190313,0.527457878232,0.527582104423,0.527703884468,
	0.527823233950,0.527940168450,0.528054703547,0.528166854816,0.528276637826,
	0.528384068142,0.528489161318,0.528591932902,0.528692398429,0.528790573423,
	0.528886473397,0.528980113847,0.529071510254,0.529160678084,0.529247632783,
	0.529332389778,0.529414964476,0.529495372261,0.529573628495,0.529649748517,
	0.529723747637,0.529795641141,0.529865444288,0.529933172306,0.529998840392,
	0.530062463716,0.530124057411,0.530183636580,0.530241216289,0.530296811570,
	0.530350437417,0.530402108788,0.530451840599,0.530499647730,0.530545545017,
	0.530589547255,0.530631669199,0.530671925555,0.530710330989,0.530746900118,
	0.530781647513,0.530814587700,0.530845735152,0.530875104297,0.530902709510,
	0.530928565117,0.530952685389,0.530975084548,0.530995776760,0.531014776138,
	0.531032096738,0.531047752563,0.531061757557,0.531074125608,0.531084870546,
	0.531094006141,0.531101546104,0.531107504088,0.531111893683,0.531114728419,
	0.531116021763,0.531115787120,0.531114037831,0.531110787176,0.531106048369,
	0.531099834558,0.531092158827,0.531083034195,0.531072473614,0.531060489969,
	0.531047096077,0.531032304691,0.531016128491,0.530998580092,0.530979672039,
	0.530959416809,0.530937826806,0.530914914368,0.530890691761,0.530865171180,
	0.530838364750,0.530810284525,0.530780942486,0.530750350543,0.530718520536,
	0.530685464231,0.530651193320,0.530615719426,0.530579054096,0.530541208806,
	0.530502194959,0.530462023882,0.530420706833,0.530378254991,0.530334679467,
	0.530289991294,0.530244201432,0.530197320770,0.530149360118,0.530100330217,
	0.530050241730,0.529999105248,0.529946931287,0.529893730289,0.529839512622,
	0.529784288581,0.529728068385,0.529670862179,0.529612680036,0.529553531954,
	0.529493427855,0.529432377591,0.529370390937,0.529307477598,0.529243647201,
	0.529178909303,0.529113273386,0.529046748860,0.528979345062,0.528911071255,
	0.528841936631,0.528771950307,0.528701121330,0.528629458675,0.528556971242,
	0.528483667864,0.528409557298,0.528334648232,0.528258949282,0.528182468994,
	0.528105215843,0.528027198233,0.527948424499,0.527868902904,0.527788641645,
	0.527707648845,0.527625932562,0.527543500783,0.527460361426,0.527376522343,
	0.527291991316,0.527206776059,0.527120884221,0.527034323383,0.526947101057,
	0.526859224692,0.526770701668,0.526681539302,0.526591744842,0.526501325475,
	0.526410288319,0.526318640431,0.526226388802,0.526133540359,0.526040101968,
	0.525946080429,0.525851482481,0.525756314800,0.525660584000,0.525564296634,
	0.525467459192,0.525370078106,0.525272159744,0.525173710418,0.525074736375,
	0.524975243808,0.524875238846,0.524774727564,0.524673715975,0.524572210035,
	0.524470215645,0.524367738645,0.524264784821,0.524161359901,0.524057469559,
	0.523953119411,0.523848315020,0.523743061892,0.523637365480,0.523531231182,
	0.523424664345,0.523317670259,0.523210254164,0.523102421245,0.522994176638,
	0.522885525424,0.522776472635,0.522667023252,0.522557182203,0.522446954370,
	0.522336344581,0.522225357617,0.522113998211,0.522002271044,0.521890180752,
	0.521777731922,0.521664929093,0.521551776758,0.521438279363,0.521324441307,
	0.521210266944,0.521095760582,0.520980926484,0.520865768868,0.520750291909,
	0.520634499736,0.520518396435,0.520401986050,0.520285272580,0.520168259984,
	0.520050952176,0.519933353030,0.519815466379,0.519697296014,0.519578845685,
	0.519460119103,0.519341119938,0.519221851820,0.519102318341,0.518982523054,
	0.518862469473,0.518742161072,0.518621601292,0.518500793531,0.518379741154,
	0.518258447487,0.518136915819,0.518015149406,0.517893151465,0.517770925180,
	0.517648473697,0.517525800131,0.517402907558,0.517279799025,0.517156477541,
	0.517032946084,0.516909207597,0.516785264992,0.516661121148,0.516536778911,
	0.516412241096,0.516287510486,0.516162589832,0.516037481857,0.515912189249,
	0.515786714670,0.515661060749,0.515535230086,0.515409225253,0.515283048790,
	0.515156703211,0.515030191000,0.514903514613,0.514776676479,0.514649678996,
	0.514522524540,0.514395215455,0.514267754060,0.514140142647,0.514012383484,
	0.513884478810,0.513756430839,0.513628241760,0.513499913737,0.513371448909,
	0.513242849388,0.513114117266,0.512985254607,0.512856263452,0.512727145820,
	0.512597903704,0.512468539075,0.512339053883,0.512209450051,0.512079729483,
	0.511949894060,0.511819945641,0.511689886062,0.511559717140,0.511429440668,
	0.511299058419,0.511168572146,0.511037983581,0.510907294435,0.510776506399,
	0.510645621145,0.510514640324,0.510383565568,0.510252398490,0.510121140683,
	0.509989793724,0.509858359166,0.509726838549,0.509595233392,0.509463545196,
	0.509331775445,0.509199925604,0.509067997122,0.508935991430,0.508803909943,
	0.508671754056,0.508539525151,0.508407224592,0.508274853726,0.508142413885,
	0.508009906385,0.507877332524,0.507744693587,0.507611990844,0.507479225546,
	0.507346398933,0.507213512228,0.507080566639,0.506947563361,0.506814503574,
	0.506681388442,0.506548219117,0.506414996737,0.506281722425,0.506148397291,
	0.506015022431,0.505881598929,0.505748127855,0.505614610267,0.505481047207,
	0.505347439708,0.505213788789,0.505080095456,0.504946360703,0.504812585513,
	0.504678770856,0.504544917690,0.504411026962,0.504277099606,0.504143136546,
	0.504009138695,0.503875106953,0.503741042211,0.503606945348,0.503472817231,
	0.503338658718,0.503204470658,0.503070253885,0.502936009227,0.502801737500,
	0.502667439509,0.502533116051,0.502398767913,0.502264395871,0.502130000692,
	0.501995583133,0.501861143943,0.501726683860,0.501592203615,0.501457703928,
	0.501323185511,0.501188649067,0.501054095289,0.500919524864,0.500784938469,
	0.500650336773,0.500515720435,0.500381090108,0.500246446435,0.500111790053,
	0.499977121590,0.499842441666,0.499707750893,0.499573049877,0.499438339213,
	0.499303619493,0.499168891299,0.499034155204,0.498899411779,0.498764661582,
	0.498629905168,0.498495143084,0.498360375870,0.498225604058,0.498090828175,
	0.497956048741,0.497821266269,0.497686481266,0.497551694232,0.497416905661,
	0.497282116042,0.497147325855,0.497012535577,0.496877745677,0.496742956619,
	0.496608168860,0.496473382852,0.496338599043,0.496203817871,0.496069039774,
	0.495934265178,0.495799494510,0.495664728188,0.495529966624,0.495395210228,
	0.495260459401,0.495125714542,0.494990976043,0.494856244293,0.494721519673,
	0.494586802561,0.494452093332,0.494317392352,0.494182699986,0.494048016592,
	0.493913342525,0.493778678135,0.493644023766,0.493509379760,0.493374746453,
	0.493240124177,0.493105513260,0.492970914026,0.492836326795,0.492701751881,
	0.492567189597,0.492432640249,0.492298104140,0.492163581571,0.492029072837,
	0.491894578230,0.491760098037,0.491625632543,0.491491182029,0.491356746771,
	0.491222327043,0.491087923115,0.490953535252,0.490819163719,0.490684808773,
	0.490550470672,0.490416149668,0.490281846011,0.490147559946,0.490013291717,
	0.489879041564,0.489744809722,0.489610596427,0.489476401908,0.489342226392,
	0.489208070105,0.489073933268,0.488939816100,0.488805718816,0.488671641629,
	0.488537584750,0.488403548386,0.488269532742,0.488135538019,0.488001564418,
	0.487867612134,0.487733681362,0.487599772293,0.487465885116,0.487332020019,
	0.487198177184,0.487064356793,0.486930559026,0.486796784059,0.486663032067,
	0.486529303222,0.486395597694,0.486261915650,0.486128257255,0.485994622673,
	0.485861012065,0.485727425589,0.485593863402,0.485460325659,0.485326812512,
	0.485193324111,0.485059860606,0.484926422141,0.484793008863,0.484659620912,
	0.484526258431,0.484392921557,0.484259610427,0.484126325176,0.483993065938,
	0.483859832843,0.483726626022,0.483593445601,0.483460291708,0.483327164465,
	0.483194063997,0.483060990423,0.482927943863,0.482794924435,0.482661932255,
	0.482528967437,0.482396030094,0.482263120337,0.482130238277,0.481997384021,
	0.481864557676,0.481731759347,0.481598989139,0.481466247153,0.481333533492,
	0.481200848253,0.481068191536,0.480935563437,0.480802964052,0.480670393475,
	0.480537851799,0.480405339114,0.480272855513,0.480140401082,0.480007975911,
	0.479875580085,0.479743213691,0.479610876811,0.479478569529,0.479346291926,
	0.479214044083,0.479081826080,0.478949637994,0.478817479903,0.478685351882,
	0.478553254007,0.478421186352,0.478289148989,0.478157141990,0.478025165426,
	0.477893219366,0.477761303880,0.477629419034,0.477497564896,0.477365741531,
	0.477233949004,0.477102187378,0.476970456718,0.476838757084,0.476707088538,
	0.476575451139,0.476443844948,0.476312270022,0.476180726419,0.476049214196,
	0.475917733408,0.475786284111,0.475654866359,0.475523480204,0.475392125700,
	0.475260802897,0.475129511849,0.474998252603,0.474867025210,0.474735829719,
	0.474604666177,0.474473534632,0.474342435130,0.474211367716,0.474080332437,
	0.473949329336,0.473818358456,0.473687419842,0.473556513534,0.473425639576,
	0.473294798007,0.473163988868,0.473033212199,0.472902468039,0.472771756427,
	0.472641077399,0.472510430994,0.472379817248,0.472249236198,0.472118687878,
	0.471988172323,0.471857689568,0.471727239646,0.471596822592,0.471466438436,
	0.471336087213,0.471205768952,0.471075483685,0.470945231443,0.470815012256,
	0.470684826153,0.470554673163,0.470424553314,0.470294466636,0.470164413154,
	0.470034392897,0.469904405891,0.469774452162,0.469644531736,0.469514644638,
	0.469384790892,0.469254970524,0.469125183556,0.468995430014,0.468865709918,
	0.468736023293,0.468606370160,0.468476750542,0.468347164459,0.468217611933,
	0.468088092984,0.467958607632,0.467829155898,0.467699737801,0.467570353360,
	0.467441002593,0.467311685520,0.467182402158,0.467053152524,0.466923936636,
	0.466794754512,0.466665606167,0.466536491618,0.466407410881,0.466278363972,
	0.466149350905,0.466020371697,0.465891426360,0.465762514911,0.465633637363,
	0.465504793729,0.465375984024,0.465247208260,0.465118466450,0.464989758607,
	0.464861084742,0.464732444869,0.464603838999,0.464475267143,0.464346729313,
	0.464218225519,0.464089755772,0.463961320083,0.463832918461,0.463704550917,
	0.463576217460,0.463447918099,0.463319652845,0.463191421705,0.463063224688,
	0.462935061803,0.462806933058,0.462678838461,0.462550778020,0.462422751743,
	0.462294759636,0.462166801706,0.462038877961,0.461910988408,0.461783133052,
	0.461655311901,0.461527524959,0.461399772234,0.461272053730,0.461144369453,
	0.461016719409,0.460889103602,0.460761522037,0.460633974720,0.460506461654,
	0.460378982844,0.460251538294,0.460124128009,0.459996751991,0.459869410245,
	0.459742102775,0.459614829582,0.459487590671,0.459360386045,0.459233215706,
	0.459106079657,0.458978977901,0.458851910440,0.458724877276,0.458597878411,
	0.458470913847,0.458343983586,0.458217087630,0.458090225979,0.457963398636,
	0.457836605601,0.457709846876,0.457583122461,0.457456432358,0.457329776566,
	0.457203155087,0.457076567921,0.456950015068,0.456823496528,0.456697012302,
	0.456570562388,0.456444146788,0.456317765500,0.456191418524,0.456065105860,
	0.455938827507,0.455812583464,0.455686373730,0.455560198304,0.455434057185,
	0.455307950372,0.455181877864,0.455055839658,0.454929835754,0.454803866150,
	0.454677930844,0.454552029834,0.454426163118,0.454300330695,0.454174532561,
	0.454048768716,0.453923039156,0.453797343879,0.453671682883,0.453546056164,
	0.453420463722,0.453294905551,0.453169381651,0.453043892017,0.452918436647,
	0.452793015537,0.452667628685,0.452542276087,0.452416957741,0.452291673641,
	0.452166423786,0.452041208170,0.451916026792,0.451790879646,0.451665766730,
	0.451540688039,0.451415643569,0.451290633317,0.451165657278,0.451040715449,
	0.450915807824,0.450790934400,0.450666095172,0.450541290136,0.450416519287,
	0.450291782622,0.450167080135,0.450042411821,0.449917777676,0.449793177696,
	0.449668611875,0.449544080208,0.449419582690,0.449295119318,0.449170690084,
	0.449046294985,0.448921934015,0.448797607168,0.448673314441,0.448549055826,
	0.448424831320,0.448300640915,0.448176484608,0.448052362392,0.447928274262,
	0.447804220213,0.447680200237,0.447556214331,0.447432262487,0.447308344701,
	0.447184460966,0.447060611277,0.446936795627,0.446813014010,0.446689266421,
	0.446565552854,0.446441873301,0.446318227758,0.446194616218,0.446071038674,
	0.445947495121,0.445823985551,0.445700509960,0.445577068340,0.445453660685,
	0.445330286988,0.445206947243,0.445083641443,0.444960369583,0.444837131654,
	0.444713927651,0.444590757567,0.444467621396,0.444344519129,0.444221450762,
	0.444098416286,0.443975415695,0.443852448983,0.443729516141,0.443606617164,
	0.443483752045,0.443360920776,0.443238123350,0.443115359761,0.442992630001,
	0.442869934063,0.442747271940,0.442624643625,0.442502049111,0.442379488390,
	0.442256961455,0.442134468300,0.442012008916,0.441889583297,0.441767191435,
	0.441644833323,0.441522508953,0.441400218318,0.441277961410,0.441155738223,
	0.441033548748,0.440911392979,0.440789270907,0.440667182525,0.440545127826,
	0.440423106801,0.440301119444,0.440179165747,0.440057245702,0.439935359301,
	0.439813506538,0.439691687403,0.439569901889,0.439448149990,0.439326431696,
	0.439204747000,0.439083095895,0.438961478372,0.438839894424,0.438718344042,
	0.438596827220,0.438475343949,0.438353894221,0.438232478029,0.438111095364,
	0.437989746218,0.437868430584,0.437747148454,0.437625899819,0.437504684672,
	0.437383503004,0.437262354808,0.437141240076,0.437020158799,0.436899110970,
	0.436778096580,0.436657115621,0.436536168086,0.436415253965,0.436294373252,
	0.436173525937,0.436052712013,0.435931931471,0.435811184304,0.435690470503,
	0.435569790060,0.435449142966,0.435328529214,0.435207948796,0.435087401702,
	0.434966887925,0.434846407457,0.434725960288,0.434605546412,0.434485165820,
	0.434364818503,0.434244504452,0.434124223661,0.434003976120,0.433883761821,
	0.433763580756,0.433643432916,0.433523318293,0.433403236879,0.433283188665,
	0.433163173643,0.433043191804,0.432923243140,0.432803327643,0.432683445304,
	0.432563596115,0.432443780067,0.432323997153,0.432204247362,0.432084530688,
	0.431964847121,0.431845196653,0.431725579275,0.431605994980,0.431486443758,
	0.431366925602,0.431247440502,0.431127988450,0.431008569438,0.430889183456,
	0.430769830497,0.430650510553,0.430531223613,0.430411969671,0.430292748716,
	0.430173560742,0.430054405739,0.429935283698,0.429816194612,0.429697138471,
	0.429578115267,0.429459124991,0.429340167636,0.429221243191,0.429102351649,
	0.428983493001,0.428864667238,0.428745874352,0.428627114334,0.428508387175,
	0.428389692868,0.428271031403,0.428152402771,0.428033806964,0.427915243974,
	0.427796713792,0.427678216408,0.427559751815,0.427441320004,0.427322920966,
	0.427204554692,0.427086221175,0.426967920404,0.426849652372,0.426731417069,
	0.426613214488,0.426495044619,0.426376907454,0.426258802985,0.426140731201,
	0.426022692095,0.425904685659,0.425786711883,0.425668770758,0.425550862276,
	0.425432986429,0.425315143207,0.425197332603,0.425079554606,0.424961809209,
	0.424844096402,0.424726416178,0.424608768527,0.424491153441,0.424373570911,
	0.424256020928,0.424138503483,0.424021018568,0.423903566174,0.423786146293,
	0.423668758915,0.423551404033,0.423434081636,0.423316791717,0.423199534266,
	0.423082309276,0.422965116737,0.422847956640,0.422730828978,0.422613733740,
	0.422496670919,0.422379640505,0.422262642491,0.422145676866,0.422028743623,
	0.421911842753,0.421794974246,0.421678138095,0.421561334290,0.421444562823,
	0.421327823685,0.421211116868,0.421094442362,0.420977800158,0.420861190249,
	0.420744612625,0.420628067278,0.420511554198,0.420395073378,0.420278624808,
	0.420162208479,0.420045824384,0.419929472512,0.419813152856,0.419696865407,
	0.419580610156,0.419464387093,0.419348196212,0.419232037501,0.419115910954,
	0.418999816561,0.418883754314,0.418767724203,0.418651726220,0.418535760357,
	0.418419826604,0.418303924953,0.418188055395,0.418072217921,0.417956412523,
	0.417840639191,0.417724897918,0.417609188694,0.417493511511,0.417377866360,
	0.417262253231,0.417146672118,0.417031123010,0.416915605898,0.416800120776,
	0.416684667632,0.416569246460,0.416453857249,0.416338499992,0.416223174679,
	0.416107881303,0.415992619853,0.415877390322,0.415762192700,0.415647026980,
	0.415531893152,0.415416791207,0.415301721137,0.415186682933,0.415071676587,
	0.414956702089,0.414841759431,0.414726848604,0.414611969600,0.414497122410,
	0.414382307025,0.414267523436,0.414152771634,0.414038051612,0.413923363360,
	0.413808706870,0.413694082132,0.413579489139,0.413464927881,0.413350398349,
	0.413235900536,0.413121434432,0.413007000029,0.412892597317,0.412778226289,
	0.412663886936,0.412549579248,0.412435303217,0.412321058835,0.412206846093,
	0.412092664982,0.411978515493,0.411864397618,0.411750311348,0.411636256674,
	0.411522233588,0.411408242081,0.411294282145,0.411180353770,0.411066456948,
	0.410952591670,0.410838757928,0.410724955713,0.410611185017,0.410497445830,
	0.410383738144,0.410270061950,0.410156417240,0.410042804005,0.409929222236,
	0.409815671925,0.409702153063,0.409588665641,0.409475209651,0.409361785084,
	0.409248391932,0.409135030185,0.409021699836,0.408908400874,0.408795133293,
	0.408681897083,0.408568692236,0.408455518742,0.408342376594,0.408229265782,
	0.408116186299,0.408003138135,0.407890121281,0.407777135730,0.407664181473,
	0.407551258500,0.407438366803,0.407325506374,0.407212677205,0.407099879285,
	0.406987112608,0.406874377163,0.406761672944,0.406648999940,0.406536358144,
	0.406423747546,0.406311168139,0.406198619913,0.406086102860,0.405973616972,
	0.405861162239,0.405748738654,0.405636346207,0.405523984890,0.405411654694,
	0.405299355612,0.405187087634,0.405074850751,0.404962644955,0.404850470238,
	0.404738326591,0.404626214006,0.404514132473,0.404402081984,0.404290062531,
	0.404178074105,0.404066116698,0.403954190300,0.403842294904,0.403730430501,
	0.403618597083,0.403506794639,0.403395023164,0.403283282646,0.403171573079,
	0.403059894454,0.402948246761,0.402836629993,0.402725044141,0.402613489196,
	0.402501965150,0.402390471994,0.402279009720,0.402167578320,0.402056177784,
	0.401944808104,0.401833469272,0.401722161279,0.401610884117,0.401499637777,
	0.401388422250,0.401277237529,0.401166083604,0.401054960467,0.400943868110,
	0.400832806524,0.400721775700,0.400610775631,0.400499806307,0.400388867720,
	0.400277959862,0.400167082723,0.400056236297,0.399945420573,0.399834635544,
	0.399723881201,0.399613157536,0.399502464540,0.399391802205,0.399281170521,
	0.399170569482,0.399059999078,0.398949459300,0.398838950141,0.398728471592,
	0.398618023644,0.398507606290,0.398397219519,0.398286863325,0.398176537698,
	0.398066242630,0.397955978113,0.397845744139,0.397735540698,0.397625367782,
	0.397515225383,0.397405113493,0.397295032103,0.397184981204,0.397074960789,
	0.396964970848,0.396855011373,0.396745082356,0.396635183789,0.396525315663,
	0.396415477969,0.396305670700,0.396195893846,0.396086147400,0.395976431352,
	0.395866745696,0.395757090421,0.395647465520,0.395537870984,0.395428306805,
	0.395318772975,0.395209269485,0.395099796326,0.394990353491,0.394880940971,
	0.394771558758,0.394662206842,0.394552885217,0.394443593872,0.394334332801,
	0.394225101995,0.394115901445,0.394006731142,0.393897591079,0.393788481248,
	0.393679401639,0.393570352245,0.393461333057,0.393352344066,0.393243385265,
	0.393134456645,0.393025558197,0.392916689914,0.392807851787,0.392699043808,
	0.392590265967,0.392481518258,0.392372800671,0.392264113199,0.392155455833,
	0.392046828564,0.391938231384,0.391829664285,0.391721127259,0.391612620298,
	0.391504143392,0.391395696534,0.391287279715,0.391178892927,0.391070536162,
	0.390962209411,0.390853912667,0.390745645920,0.390637409163,0.390529202387,
	0.390421025583,0.390312878745,0.390204761862,0.390096674928,0.389988617934,
	0.389880590870,0.389772593730,0.389664626505,0.389556689187,0.389448781766,
	0.389340904236,0.389233056587,0.389125238812,0.389017450902,0.388909692850,
	0.388801964645,0.388694266281,0.388586597750,0.388478959042,0.388371350150,
	0.388263771065,0.388156221779,0.388048702285,0.387941212572,0.387833752635,
	0.387726322463,0.387618922049,0.387511551385,0.387404210462,0.387296899273,
	0.387189617809,0.387082366061,0.386975144021,0.386867951682,0.386760789036,
	0.386653656072,0.386546552785,0.386439479165,0.386332435204,0.386225420894,
	0.386118436227,0.386011481194,0.385904555788,0.385797660000,0.385690793821,
	0.385583957245,0.385477150262,0.385370372865,0.385263625044,0.385156906793,
	0.385050218102,0.384943558964,0.384836929370,0.384730329313,0.384623758784,
	0.384517217774,0.384410706277,0.384304224282,0.384197771784,0.384091348772,
	0.383984955239,0.383878591178,0.383772256579,0.383665951434,0.383559675736,
	0.383453429476,0.383347212646,0.383241025239,0.383134867245,0.383028738656,
	0.382922639465,0.382816569664,0.382710529244,0.382604518196,0.382498536514,
	0.382392584189,0.382286661212,0.382180767576,0.382074903272,0.381969068293,
	0.381863262630,0.381757486274,0.381651739219,0.381546021456,0.381440332976,
	0.381334673772,0.381229043836,0.381123443159,0.381017871733,0.380912329551,
	0.380806816603,0.380701332883,0.380595878381,0.380490453091,0.380385057003,
	0.380279690110,0.380174352403,0.380069043875,0.379963764517,0.379858514322,
	0.379753293280,0.379648101385,0.379542938628,0.379437805002,0.379332700497,
	0.379227625106,0.379122578820,0.379017561633,0.378912573535,0.378807614519,
	0.378702684577,0.378597783700,0.378492911880,0.378388069110,0.378283255382,
	0.378178470687,0.378073715017,0.377968988364,0.377864290721,0.377759622079,
	0.377654982430,0.377550371766,0.377445790080,0.377341237362,0.377236713606,
	0.377132218803,0.377027752944,0.376923316023,0.376818908031,0.376714528959,
	0.376610178801,0.376505857548,0.376401565191,0.376297301724,0.376193067138,
	0.376088861424,0.375984684576,0.375880536584,0.375776417442,0.375672327140,
	0.375568265672,0.375464233028,0.375360229202,0.375256254184,0.375152307968,
	0.375048390545,0.374944501907,0.374840642046,0.374736810954,0.374633008623,
	0.374529235046,0.374425490214,0.374321774119,0.374218086754,0.374114428110,
	0.374010798180,0.373907196955,0.373803624427,0.373700080589,0.373596565433,
	0.373493078951,0.373389621134,0.373286191975,0.373182791466,0.373079419599,
	0.372976076366,0.372872761759,0.372769475770,0.372666218392,0.372562989616,
	0.372459789434,0.372356617838,0.372253474822,0.372150360375,0.372047274492,
	0.371944217163,0.371841188382,0.371738188139,0.371635216427,0.371532273239,
	0.371429358565,0.371326472400,0.371223614733,0.371120785559,0.371017984868,
	0.370915212652,0.370812468905,0.370709753618,0.370607066783,0.370504408392,
	0.370401778438,0.370299176912,0.370196603807,0.370094059114,0.369991542827,
	0.369889054936,0.369786595435,0.369684164315,0.369581761568,0.369479387187,
	0.369377041164,0.369274723491,0.369172434160,0.369070173163,0.368967940492,
	0.368865736139,0.368763560098,0.368661412359,0.368559292915,0.368457201758,
	0.368355138881,0.368253104275,0.368151097932,0.368049119846,0.367947170007,
	0.367845248408,0.367743355042,0.367641489901,0.367539652976,0.367437844259,
	0.367336063744,0.367234311422,0.367132587286,0.367030891327,0.366929223538,
	0.366827583911,0.366725972439,0.366624389112,0.366522833925,0.366421306868,
	0.366319807934,0.366218337115,0.366116894404,0.366015479793,0.365914093273,
	0.365812734838,0.365711404479,0.365610102188,0.365508827958,0.365407581782,
	0.365306363650,0.365205173556,0.365104011492,0.365002877449,0.364901771421,
	0.364800693399,0.364699643376,0.364598621344,0.364497627294,0.364396661221,
	0.364295723115,0.364194812968,0.364093930774,0.363993076525,0.363892250212,
	0.363791451828,0.363690681365,0.363589938816,0.363489224172,0.363388537427,
	0.363287878571,0.363187247599,0.363086644501,0.362986069270,0.362885521898,
	0.362785002379,0.362684510703,0.362584046863,0.362483610852,0.362383202662,
	0.362282822285,0.362182469713,0.362082144939,0.361981847955,0.361881578754,
	0.361781337327,0.361681123667,0.361580937766,0.361480779617,0.361380649211,
	0.361280546542,0.361180471601,0.361080424381,0.360980404874,0.360880413073,
	0.360780448969,0.360680512556,0.360580603825
	}
};

double always_inline c04_stage3_negclip(double x) {
    double f = fabs(x);
    f = f * c04_stage3_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = c04_stage3_neg_table.data[0];
    } else if (i >= c04_stage3_neg_table.size-1) {
        f = c04_stage3_neg_table.data[c04_stage3_neg_table.size-1];
    } else {
        f -= i;
        f = c04_stage3_neg_table.data[i]*(1-f) + c04_stage3_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}


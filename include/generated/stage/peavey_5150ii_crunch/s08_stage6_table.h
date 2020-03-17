
// s08_stage6_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  1.000000
 // --table_op  1.000000

struct tables08_stage6 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables08_stage6_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables08_stage6&() const { return *(tables08_stage6*)this; }
};

static tables08_stage6_imp<2048> s08_stage6_table __rt_data = {
	0,0.300077,204.7,2048, {
	0.000000000000,0.000289685417,0.000579156043,0.000868412032,0.001157453534,
	0.001446280702,0.001734893689,0.002023292644,0.002311477721,0.002599449069,
	0.002887206842,0.003174751190,0.003462082264,0.003749200215,0.004036105194,
	0.004322797352,0.004609276840,0.004895543809,0.005181598408,0.005467440788,
	0.005753071100,0.006038489493,0.006323696119,0.006608691126,0.006893474664,
	0.007178046884,0.007462407936,0.007746557967,0.008030497129,0.008314225571,
	0.008597743440,0.008881050888,0.009164148062,0.009447035113,0.009729712187,
	0.010012179435,0.010294437005,0.010576485045,0.010858323703,0.011139953129,
	0.011421373470,0.011702584874,0.011983587490,0.012264381465,0.012544966946,
	0.012825344082,0.013105513020,0.013385473908,0.013665226893,0.013944772122,
	0.014224109742,0.014503239900,0.014782162744,0.015060878420,0.015339387075,
	0.015617688855,0.015895783907,0.016173672378,0.016451354413,0.016728830159,
	0.017006099762,0.017283163368,0.017560021124,0.017836673173,0.018113119663,
	0.018389360740,0.018665396547,0.018941227232,0.019216852938,0.019492273812,
	0.019767489999,0.020042501642,0.020317308888,0.020591911881,0.020866310766,
	0.021140505687,0.021414496789,0.021688284215,0.021961868111,0.022235248621,
	0.022508425888,0.022781400056,0.023054171270,0.023326739673,0.023599105409,
	0.023871268621,0.024143229452,0.024414988047,0.024686544548,0.024957899098,
	0.025229051841,0.025500002920,0.025770752477,0.026041300654,0.026311647596,
	0.026581793443,0.026851738339,0.027121482426,0.027391025847,0.027660368742,
	0.027929511255,0.028198453527,0.028467195700,0.028735737917,0.029004080317,
	0.029272223044,0.029540166238,0.029807910041,0.030075454593,0.030342800037,
	0.030609946513,0.030876894163,0.031143643126,0.031410193543,0.031676545557,
	0.031942699306,0.032208654931,0.032474412572,0.032739972371,0.033005334467,
	0.033270498999,0.033535466109,0.033800235935,0.034064808618,0.034329184297,
	0.034593363112,0.034857345202,0.035121130707,0.035384719765,0.035648112516,
	0.035911309100,0.036174309654,0.036437114318,0.036699723230,0.036962136530,
	0.037224354356,0.037486376845,0.037748204137,0.038009836371,0.038271273683,
	0.038532516212,0.038793564097,0.039054417474,0.039315076482,0.039575541259,
	0.039835811942,0.040095888668,0.040355771575,0.040615460800,0.040874956481,
	0.041134258754,0.041393367757,0.041652283626,0.041911006498,0.042169536511,
	0.042427873799,0.042686018501,0.042943970753,0.043201730690,0.043459298449,
	0.043716674167,0.043973857978,0.044230850020,0.044487650428,0.044744259338,
	0.045000676885,0.045256903205,0.045512938434,0.045768782706,0.046024436158,
	0.046279898924,0.046535171139,0.046790252938,0.047045144457,0.047299845830,
	0.047554357191,0.047808678676,0.048062810419,0.048316752554,0.048570505215,
	0.048824068538,0.049077442655,0.049330627701,0.049583623810,0.049836431116,
	0.050089049753,0.050341479853,0.050593721552,0.050845774981,0.051097640275,
	0.051349317567,0.051600806990,0.051852108677,0.052103222761,0.052354149376,
	0.052604888653,0.052855440725,0.053105805726,0.053355983788,0.053605975043,
	0.053855779623,0.054105397661,0.054354829288,0.054604074638,0.054853133842,
	0.055102007031,0.055350694338,0.055599195894,0.055847511832,0.056095642281,
	0.056343587374,0.056591347242,0.056838922017,0.057086311829,0.057333516810,
	0.057580537089,0.057827372800,0.058074024071,0.058320491034,0.058566773819,
	0.058812872557,0.059058787378,0.059304518413,0.059550065791,0.059795429643,
	0.060040610099,0.060285607288,0.060530421341,0.060775052388,0.061019500557,
	0.061263765979,0.061507848783,0.061751749098,0.061995467054,0.062239002780,
	0.062482356405,0.062725528058,0.062968517867,0.063211325963,0.063453952473,
	0.063696397526,0.063938661251,0.064180743776,0.064422645230,0.064664365741,
	0.064905905436,0.065147264445,0.065388442895,0.065629440914,0.065870258630,
	0.066110896171,0.066351353664,0.066591631237,0.066831729018,0.067071647133,
	0.067311385710,0.067550944877,0.067790324759,0.068029525486,0.068268547183,
	0.068507389977,0.068746053994,0.068984539363,0.069222846209,0.069460974658,
	0.069698924838,0.069936696874,0.070174290892,0.070411707020,0.070648945382,
	0.070886006104,0.071122889314,0.071359595136,0.071596123696,0.071832475119,
	0.072068649532,0.072304647060,0.072540467827,0.072776111960,0.073011579582,
	0.073246870821,0.073481985799,0.073716924643,0.073951687477,0.074186274426,
	0.074420685614,0.074654921167,0.074888981207,0.075122865861,0.075356575251,
	0.075590109503,0.075823468739,0.076056653086,0.076289662665,0.076522497602,
	0.076755158019,0.076987644041,0.077219955791,0.077452093392,0.077684056969,
	0.077915846643,0.078147462539,0.078378904780,0.078610173489,0.078841268788,
	0.079072190800,0.079302939649,0.079533515457,0.079763918346,0.079994148440,
	0.080224205860,0.080454090729,0.080683803170,0.080913343304,0.081142711253,
	0.081371907139,0.081600931086,0.081829783213,0.082058463644,0.082286972499,
	0.082515309900,0.082743475969,0.082971470828,0.083199294596,0.083426947397,
	0.083654429350,0.083881740578,0.084108881200,0.084335851338,0.084562651113,
	0.084789280645,0.085015740055,0.085242029463,0.085468148991,0.085694098758,
	0.085919878885,0.086145489491,0.086370930698,0.086596202625,0.086821305391,
	0.087046239118,0.087271003924,0.087495599930,0.087720027255,0.087944286018,
	0.088168376340,0.088392298338,0.088616052134,0.088839637845,0.089063055591,
	0.089286305491,0.089509387664,0.089732302229,0.089955049305,0.090177629010,
	0.090400041463,0.090622286782,0.090844365086,0.091066276493,0.091288021121,
	0.091509599090,0.091731010516,0.091952255518,0.092173334214,0.092394246721,
	0.092614993158,0.092835573642,0.093055988290,0.093276237221,0.093496320551,
	0.093716238398,0.093935990880,0.094155578113,0.094375000215,0.094594257302,
	0.094813349492,0.095032276901,0.095251039647,0.095469637845,0.095688071613,
	0.095906341067,0.096124446323,0.096342387499,0.096560164709,0.096777778071,
	0.096995227700,0.097212513713,0.097429636225,0.097646595353,0.097863391212,
	0.098080023917,0.098296493586,0.098512800332,0.098728944271,0.098944925520,
	0.099160744193,0.099376400405,0.099591894271,0.099807225908,0.100022395429,
	0.100237402949,0.100452248584,0.100666932447,0.100881454655,0.101095815320,
	0.101310014559,0.101524052484,0.101737929211,0.101951644854,0.102165199527,
	0.102378593343,0.102591826418,0.102804898865,0.103017810797,0.103230562329,
	0.103443153574,0.103655584646,0.103867855659,0.104079966725,0.104291917958,
	0.104503709472,0.104715341379,0.104926813793,0.105138126828,0.105349280594,
	0.105560275207,0.105771110778,0.105981787420,0.106192305246,0.106402664368,
	0.106612864900,0.106822906952,0.107032790638,0.107242516071,0.107452083361,
	0.107661492621,0.107870743963,0.108079837500,0.108288773343,0.108497551603,
	0.108706172392,0.108914635823,0.109122942006,0.109331091053,0.109539083076,
	0.109746918185,0.109954596492,0.110162118108,0.110369483145,0.110576691712,
	0.110783743922,0.110990639884,0.111197379710,0.111403963510,0.111610391395,
	0.111816663475,0.112022779861,0.112228740664,0.112434545992,0.112640195958,
	0.112845690670,0.113051030239,0.113256214775,0.113461244388,0.113666119187,
	0.113870839282,0.114075404783,0.114279815800,0.114484072442,0.114688174818,
	0.114892123038,0.115095917211,0.115299557446,0.115503043853,0.115706376540,
	0.115909555616,0.116112581191,0.116315453372,0.116518172270,0.116720737992,
	0.116923150647,0.117125410344,0.117327517190,0.117529471295,0.117731272767,
	0.117932921713,0.118134418242,0.118335762463,0.118536954482,0.118737994408,
	0.118938882348,0.119139618411,0.119340202704,0.119540635335,0.119740916411,
	0.119941046039,0.120141024328,0.120340851383,0.120540527313,0.120740052225,
	0.120939426225,0.121138649421,0.121337721919,0.121536643827,0.121735415251,
	0.121934036297,0.122132507073,0.122330827685,0.122528998239,0.122727018842,
	0.122924889600,0.123122610619,0.123320182006,0.123517603866,0.123714876306,
	0.123911999431,0.124108973347,0.124305798160,0.124502473977,0.124699000901,
	0.124895379040,0.125091608497,0.125287689380,0.125483621793,0.125679405842,
	0.125875041631,0.126070529265,0.126265868851,0.126461060492,0.126656104293,
	0.126851000360,0.127045748798,0.127240349710,0.127434803201,0.127629109376,
	0.127823268340,0.128017280196,0.128211145049,0.128404863004,0.128598434164,
	0.128791858633,0.128985136516,0.129178267916,0.129371252937,0.129564091684,
	0.129756784259,0.129949330766,0.130141731309,0.130333985992,0.130526094917,
	0.130718058189,0.130909875909,0.131101548183,0.131293075112,0.131484456800,
	0.131675693350,0.131866784864,0.132057731446,0.132248533198,0.132439190223,
	0.132629702623,0.132820070502,0.133010293961,0.133200373103,0.133390308030,
	0.133580098844,0.133769745649,0.133959248545,0.134148607635,0.134337823020,
	0.134526894803,0.134715823086,0.134904607970,0.135093249557,0.135281747948,
	0.135470103246,0.135658315551,0.135846384964,0.136034311588,0.136222095523,
	0.136409736871,0.136597235733,0.136784592209,0.136971806401,0.137158878410,
	0.137345808336,0.137532596280,0.137719242343,0.137905746625,0.138092109227,
	0.138278330250,0.138464409793,0.138650347958,0.138836144843,0.139021800551,
	0.139207315180,0.139392688830,0.139577921602,0.139763013596,0.139947964911,
	0.140132775647,0.140317445904,0.140501975781,0.140686365378,0.140870614795,
	0.141054724130,0.141238693483,0.141422522954,0.141606212642,0.141789762645,
	0.141973173062,0.142156443994,0.142339575538,0.142522567794,0.142705420859,
	0.142888134834,0.143070709816,0.143253145905,0.143435443198,0.143617601793,
	0.143799621791,0.143981503288,0.144163246383,0.144344851174,0.144526317759,
	0.144707646236,0.144888836703,0.145069889258,0.145250803999,0.145431581023,
	0.145612220428,0.145792722312,0.145973086772,0.146153313906,0.146333403810,
	0.146513356583,0.146693172322,0.146872851123,0.147052393085,0.147231798303,
	0.147411066875,0.147590198898,0.147769194468,0.147948053683,0.148126776639,
	0.148305363432,0.148483814160,0.148662128919,0.148840307805,0.149018350914,
	0.149196258343,0.149374030188,0.149551666546,0.149729167511,0.149906533181,
	0.150083763652,0.150260859018,0.150437819376,0.150614644822,0.150791335452,
	0.150967891360,0.151144312643,0.151320599396,0.151496751714,0.151672769693,
	0.151848653428,0.152024403014,0.152200018547,0.152375500121,0.152550847831,
	0.152726061773,0.152901142041,0.153076088730,0.153250901935,0.153425581750,
	0.153600128270,0.153774541590,0.153948821804,0.154122969006,0.154296983291,
	0.154470864754,0.154644613487,0.154818229586,0.154991713144,0.155165064256,
	0.155338283015,0.155511369515,0.155684323851,0.155857146115,0.156029836402,
	0.156202394804,0.156374821417,0.156547116332,0.156719279644,0.156891311446,
	0.157063211831,0.157234980892,0.157406618722,0.157578125416,0.157749501064,
	0.157920745761,0.158091859600,0.158262842673,0.158433695072,0.158604416891,
	0.158775008223,0.158945469159,0.159115799793,0.159286000216,0.159456070521,
	0.159626010800,0.159795821146,0.159965501651,0.160135052407,0.160304473505,
	0.160473765038,0.160642927098,0.160811959776,0.160980863165,0.161149637356,
	0.161318282440,0.161486798510,0.161655185656,0.161823443970,0.161991573544,
	0.162159574469,0.162327446836,0.162495190737,0.162662806262,0.162830293502,
	0.162997652549,0.163164883493,0.163331986425,0.163498961437,0.163665808618,
	0.163832528060,0.163999119853,0.164165584088,0.164331920855,0.164498130244,
	0.164664212346,0.164830167252,0.164995995051,0.165161695833,0.165327269689,
	0.165492716709,0.165658036983,0.165823230600,0.165988297651,0.166153238225,
	0.166318052412,0.166482740301,0.166647301983,0.166811737546,0.166976047080,
	0.167140230675,0.167304288421,0.167468220405,0.167632026717,0.167795707448,
	0.167959262684,0.168122692517,0.168285997034,0.168449176325,0.168612230478,
	0.168775159582,0.168937963726,0.169100642998,0.169263197488,0.169425627283,
	0.169587932472,0.169750113143,0.169912169386,0.170074101287,0.170235908936,
	0.170397592420,0.170559151827,0.170720587246,0.170881898765,0.171043086470,
	0.171204150451,0.171365090795,0.171525907590,0.171686600923,0.171847170882,
	0.172007617554,0.172167941028,0.172328141389,0.172488218726,0.172648173127,
	0.172808004677,0.172967713464,0.173127299576,0.173286763100,0.173446104121,
	0.173605322728,0.173764419008,0.173923393046,0.174082244930,0.174240974746,
	0.174399582581,0.174558068521,0.174716432654,0.174874675065,0.175032795840,
	0.175190795066,0.175348672830,0.175506429218,0.175664064314,0.175821578207,
	0.175978970981,0.176136242722,0.176293393517,0.176450423451,0.176607332610,
	0.176764121080,0.176920788946,0.177077336293,0.177233763208,0.177390069776,
	0.177546256082,0.177702322212,0.177858268250,0.178014094283,0.178169800394,
	0.178325386670,0.178480853194,0.178636200053,0.178791427332,0.178946535114,
	0.179101523485,0.179256392529,0.179411142331,0.179565772976,0.179720284549,
	0.179874677133,0.180028950813,0.180183105674,0.180337141800,0.180491059275,
	0.180644858183,0.180798538609,0.180952100636,0.181105544348,0.181258869830,
	0.181412077166,0.181565166438,0.181718137732,0.181870991130,0.182023726717,
	0.182176344575,0.182328844789,0.182481227442,0.182633492617,0.182785640398,
	0.182937670868,0.183089584110,0.183241380207,0.183393059244,0.183544621301,
	0.183696066463,0.183847394813,0.183998606434,0.184149701408,0.184300679817,
	0.184451541746,0.184602287276,0.184752916490,0.184903429470,0.185053826300,
	0.185204107061,0.185354271836,0.185504320707,0.185654253756,0.185804071066,
	0.185953772719,0.186103358797,0.186252829381,0.186402184554,0.186551424398,
	0.186700548994,0.186849558424,0.186998452771,0.187147232115,0.187295896538,
	0.187444446123,0.187592880949,0.187741201099,0.187889406655,0.188037497697,
	0.188185474307,0.188333336565,0.188481084554,0.188628718354,0.188776238046,
	0.188923643711,0.189070935431,0.189218113285,0.189365177355,0.189512127722,
	0.189658964466,0.189805687668,0.189952297408,0.190098793767,0.190245176826,
	0.190391446665,0.190537603363,0.190683647002,0.190829577662,0.190975395423,
	0.191121100365,0.191266692568,0.191412172112,0.191557539077,0.191702793543,
	0.191847935590,0.191992965297,0.192137882745,0.192282688013,0.192427381180,
	0.192571962327,0.192716431532,0.192860788875,0.193005034436,0.193149168294,
	0.193293190527,0.193437101216,0.193580900440,0.193724588277,0.193868164807,
	0.194011630109,0.194154984261,0.194298227343,0.194441359433,0.194584380610,
	0.194727290953,0.194870090540,0.195012779451,0.195155357763,0.195297825556,
	0.195440182907,0.195582429895,0.195724566598,0.195866593095,0.196008509464,
	0.196150315783,0.196292012130,0.196433598583,0.196575075220,0.196716442119,
	0.196857699359,0.196998847016,0.197139885169,0.197280813895,0.197421633272,
	0.197562343377,0.197702944290,0.197843436085,0.197983818842,0.198124092637,
	0.198264257548,0.198404313653,0.198544261028,0.198684099750,0.198823829897,
	0.198963451546,0.199102964773,0.199242369657,0.199381666273,0.199520854699,
	0.199659935010,0.199798907285,0.199937771600,0.200076528031,0.200215176655,
	0.200353717548,0.200492150788,0.200630476449,0.200768694610,0.200906805345,
	0.201044808732,0.201182704847,0.201320493765,0.201458175562,0.201595750316,
	0.201733218101,0.201870578994,0.202007833071,0.202144980407,0.202282021078,
	0.202418955160,0.202555782729,0.202692503860,0.202829118628,0.202965627110,
	0.203102029381,0.203238325516,0.203374515590,0.203510599678,0.203646577857,
	0.203782450201,0.203918216786,0.204053877685,0.204189432975,0.204324882731,
	0.204460227027,0.204595465938,0.204730599539,0.204865627904,0.205000551109,
	0.205135369229,0.205270082337,0.205404690508,0.205539193817,0.205673592338,
	0.205807886146,0.205942075314,0.206076159918,0.206210140032,0.206344015729,
	0.206477787084,0.206611454170,0.206745017063,0.206878475835,0.207011830562,
	0.207145081316,0.207278228171,0.207411271201,0.207544210481,0.207677046083,
	0.207809778081,0.207942406550,0.208074931561,0.208207353189,0.208339671507,
	0.208471886589,0.208603998507,0.208736007336,0.208867913147,0.208999716016,
	0.209131416013,0.209263013213,0.209394507688,0.209525899512,0.209657188757,
	0.209788375497,0.209919459803,0.210050441748,0.210181321407,0.210312098849,
	0.210442774150,0.210573347381,0.210703818614,0.210834187922,0.210964455377,
	0.211094621052,0.211224685019,0.211354647349,0.211484508117,0.211614267392,
	0.211743925248,0.211873481756,0.212002936989,0.212132291019,0.212261543916,
	0.212390695753,0.212519746603,0.212648696535,0.212777545623,0.212906293938,
	0.213034941550,0.213163488533,0.213291934957,0.213420280893,0.213548526414,
	0.213676671590,0.213804716492,0.213932661192,0.214060505761,0.214188250271,
	0.214315894791,0.214443439393,0.214570884149,0.214698229128,0.214825474402,
	0.214952620042,0.215079666118,0.215206612701,0.215333459862,0.215460207671,
	0.215586856199,0.215713405516,0.215839855693,0.215966206800,0.216092458908,
	0.216218612087,0.216344666407,0.216470621938,0.216596478751,0.216722236915,
	0.216847896501,0.216973457579,0.217098920218,0.217224284489,0.217349550461,
	0.217474718204,0.217599787788,0.217724759283,0.217849632758,0.217974408283,
	0.218099085928,0.218223665761,0.218348147853,0.218472532273,0.218596819090,
	0.218721008373,0.218845100193,0.218969094617,0.219092991716,0.219216791558,
	0.219340494212,0.219464099748,0.219587608234,0.219711019740,0.219834334333,
	0.219957552084,0.220080673060,0.220203697332,0.220326624966,0.220449456032,
	0.220572190599,0.220694828734,0.220817370507,0.220939815986,0.221062165239,
	0.221184418335,0.221306575342,0.221428636327,0.221550601361,0.221672470510,
	0.221794243842,0.221915921426,0.222037503330,0.222158989622,0.222280380369,
	0.222401675639,0.222522875501,0.222643980021,0.222764989269,0.222885903311,
	0.223006722214,0.223127446048,0.223248074878,0.223368608773,0.223489047800,
	0.223609392027,0.223729641520,0.223849796348,0.223969856576,0.224089822273,
	0.224209693506,0.224329470341,0.224449152846,0.224568741088,0.224688235134,
	0.224807635050,0.224926940904,0.225046152762,0.225165270691,0.225284294758,
	0.225403225029,0.225522061572,0.225640804452,0.225759453736,0.225878009491,
	0.225996471784,0.226114840679,0.226233116245,0.226351298547,0.226469387651,
	0.226587383624,0.226705286531,0.226823096440,0.226940813415,0.227058437524,
	0.227175968831,0.227293407403,0.227410753306,0.227528006606,0.227645167368,
	0.227762235658,0.227879211541,0.227996095084,0.228112886353,0.228229585411,
	0.228346192326,0.228462707163,0.228579129986,0.228695460862,0.228811699855,
	0.228927847031,0.229043902455,0.229159866193,0.229275738309,0.229391518869,
	0.229507207937,0.229622805579,0.229738311860,0.229853726844,0.229969050596,
	0.230084283181,0.230199424664,0.230314475110,0.230429434583,0.230544303148,
	0.230659080870,0.230773767813,0.230888364041,0.231002869619,0.231117284611,
	0.231231609083,0.231345843097,0.231459986719,0.231574040012,0.231688003041,
	0.231801875870,0.231915658563,0.232029351184,0.232142953797,0.232256466466,
	0.232369889255,0.232483222227,0.232596465447,0.232709618978,0.232822682884,
	0.232935657229,0.233048542076,0.233161337490,0.233274043532,0.233386660268,
	0.233499187760,0.233611626071,0.233723975266,0.233836235408,0.233948406559,
	0.234060488784,0.234172482144,0.234284386704,0.234396202526,0.234507929674,
	0.234619568210,0.234731118198,0.234842579700,0.234953952780,0.235065237499,
	0.235176433921,0.235287542110,0.235398562126,0.235509494033,0.235620337894,
	0.235731093771,0.235841761726,0.235952341823,0.236062834124,0.236173238690,
	0.236283555584,0.236393784870,0.236503926608,0.236613980861,0.236723947691,
	0.236833827160,0.236943619332,0.237053324266,0.237162942026,0.237272472674,
	0.237381916270,0.237491272878,0.237600542559,0.237709725374,0.237818821387,
	0.237927830657,0.238036753247,0.238145589219,0.238254338633,0.238363001552,
	0.238471578037,0.238580068149,0.238688471950,0.238796789501,0.238905020864,
	0.239013166099,0.239121225268,0.239229198432,0.239337085652,0.239444886989,
	0.239552602505,0.239660232260,0.239767776315,0.239875234731,0.239982607569,
	0.240089894890,0.240197096754,0.240304213223,0.240411244356,0.240518190216,
	0.240625050861,0.240731826353,0.240838516753,0.240945122120,0.241051642516,
	0.241158078000,0.241264428633,0.241370694476,0.241476875588,0.241582972030,
	0.241688983861,0.241794911143,0.241900753935,0.242006512297,0.242112186289,
	0.242217775972,0.242323281404,0.242428702647,0.242534039759,0.242639292802,
	0.242744461833,0.242849546913,0.242954548103,0.243059465461,0.243164299046,
	0.243269048919,0.243373715139,0.243478297766,0.243582796859,0.243687212477,
	0.243791544679,0.243895793525,0.243999959075,0.244104041387,0.244208040520,
	0.244311956534,0.244415789488,0.244519539441,0.244623206451,0.244726790578,
	0.244830291881,0.244933710418,0.245037046248,0.245140299431,0.245243470025,
	0.245346558088,0.245449563679,0.245552486857,0.245655327681,0.245758086209,
	0.245860762499,0.245963356611,0.246065868601,0.246168298530,0.246270646454,
	0.246372912433,0.246475096525,0.246577198787,0.246679219279,0.246781158058,
	0.246883015181,0.246984790709,0.247086484697,0.247188097205,0.247289628290,
	0.247391078010,0.247492446423,0.247593733586,0.247694939559,0.247796064397,
	0.247897108159,0.247998070903,0.248098952686,0.248199753566,0.248300473599,
	0.248401112845,0.248501671359,0.248602149200,0.248702546425,0.248802863091,
	0.248903099256,0.249003254976,0.249103330309,0.249203325312,0.249303240043,
	0.249403074557,0.249502828913,0.249602503166,0.249702097376,0.249801611597,
	0.249901045887,0.250000400303,0.250099674901,0.250198869739,0.250297984872,
	0.250397020359,0.250495976255,0.250594852617,0.250693649501,0.250792366964,
	0.250891005062,0.250989563853,0.251088043392,0.251186443735,0.251284764939,
	0.251383007061,0.251481170156,0.251579254280,0.251677259490,0.251775185843,
	0.251873033393,0.251970802197,0.252068492311,0.252166103791,0.252263636692,
	0.252361091072,0.252458466985,0.252555764487,0.252652983635,0.252750124483,
	0.252847187088,0.252944171505,0.253041077789,0.253137905997,0.253234656184,
	0.253331328404,0.253427922715,0.253524439171,0.253620877827,0.253717238739,
	0.253813521962,0.253909727552,0.254005855563,0.254101906050,0.254197879070,
	0.254293774677,0.254389592925,0.254485333870,0.254580997568,0.254676584072,
	0.254772093438,0.254867525721,0.254962880975,0.255058159256,0.255153360617,
	0.255248485114,0.255343532802,0.255438503734,0.255533397966,0.255628215552,
	0.255722956547,0.255817621004,0.255912208979,0.256006720527,0.256101155700,
	0.256195514554,0.256289797143,0.256384003521,0.256478133742,0.256572187860,
	0.256666165931,0.256760068006,0.256853894142,0.256947644391,0.257041318808,
	0.257134917447,0.257228440361,0.257321887604,0.257415259231,0.257508555295,
	0.257601775849,0.257694920948,0.257787990645,0.257880984993,0.257973904047,
	0.258066747860,0.258159516485,0.258252209976,0.258344828386,0.258437371769,
	0.258529840178,0.258622233667,0.258714552288,0.258806796095,0.258898965141,
	0.258991059480,0.259083079164,0.259175024246,0.259266894780,0.259358690819,
	0.259450412416,0.259542059623,0.259633632493,0.259725131080,0.259816555436,
	0.259907905614,0.259999181667,0.260090383648,0.260181511608,0.260272565602,
	0.260363545681,0.260454451898,0.260545284305,0.260636042956,0.260726727902,
	0.260817339197,0.260907876891,0.260998341038,0.261088731691,0.261179048901,
	0.261269292720,0.261359463201,0.261449560396,0.261539584357,0.261629535137,
	0.261719412786,0.261809217358,0.261898948904,0.261988607476,0.262078193127,
	0.262167705907,0.262257145870,0.262346513065,0.262435807547,0.262525029365,
	0.262614178573,0.262703255220,0.262792259360,0.262881191044,0.262970050323,
	0.263058837248,0.263147551872,0.263236194245,0.263324764420,0.263413262447,
	0.263501688378,0.263590042263,0.263678324156,0.263766534105,0.263854672164,
	0.263942738382,0.264030732811,0.264118655502,0.264206506507,0.264294285875,
	0.264381993658,0.264469629908,0.264557194674,0.264644688009,0.264732109961,
	0.264819460584,0.264906739926,0.264993948039,0.265081084974,0.265168150780,
	0.265255145510,0.265342069213,0.265428921939,0.265515703740,0.265602414666,
	0.265689054768,0.265775624095,0.265862122698,0.265948550627,0.266034907933,
	0.266121194666,0.266207410876,0.266293556613,0.266379631927,0.266465636870,
	0.266551571490,0.266637435837,0.266723229962,0.266808953915,0.266894607746,
	0.266980191504,0.267065705239,0.267151149001,0.267236522840,0.267321826806,
	0.267407060949,0.267492225318,0.267577319962,0.267662344932,0.267747300276,
	0.267832186046,0.267917002289,0.268001749056,0.268086426395,0.268171034357,
	0.268255572991,0.268340042346,0.268424442471,0.268508773416,0.268593035230,
	0.268677227962,0.268761351661,0.268845406376,0.268929392157,0.269013309052,
	0.269097157111,0.269180936383,0.269264646916,0.269348288759,0.269431861962,
	0.269515366572,0.269598802640,0.269682170213,0.269765469341,0.269848700072,
	0.269931862455,0.270014956539,0.270097982372,0.270180940002,0.270263829478,
	0.270346650850,0.270429404164,0.270512089471,0.270594706817,0.270677256252,
	0.270759737823,0.270842151580,0.270924497570,0.271006775841,0.271088986443,
	0.271171129422,0.271253204827,0.271335212707,0.271417153108,0.271499026081,
	0.271580831671,0.271662569927,0.271744240898,0.271825844631,0.271907381173,
	0.271988850574,0.272070252880,0.272151588139,0.272232856399,0.272314057708,
	0.272395192113,0.272476259662,0.272557260403,0.272638194383,0.272719061649,
	0.272799862250,0.272880596233,0.272961263644,0.273041864531,0.273122398943,
	0.273202866926,0.273283268527,0.273363603793,0.273443872772,0.273524075512,
	0.273604212059,0.273684282460,0.273764286762,0.273844225013,0.273924097259,
	0.274003903548,0.274083643926,0.274163318441,0.274242927138,0.274322470066,
	0.274401947271,0.274481358799,0.274560704698,0.274639985014,0.274719199794,
	0.274798349085,0.274877432932,0.274956451384,0.275035404486,0.275114292284,
	0.275193114826,0.275271872158,0.275350564325,0.275429191376,0.275507753355,
	0.275586250310,0.275664682286,0.275743049331,0.275821351489,0.275899588807,
	0.275977761332,0.276055869110,0.276133912186,0.276211890607,0.276289804419,
	0.276367653667,0.276445438399,0.276523158658,0.276600814493,0.276678405948,
	0.276755933069,0.276833395903,0.276910794494,0.276988128889,0.277065399134,
	0.277142605273,0.277219747353,0.277296825419,0.277373839517,0.277450789693,
	0.277527675991,0.277604498458,0.277681257139,0.277757952079,0.277834583324,
	0.277911150919,0.277987654909,0.278064095340,0.278140472257,0.278216785704,
	0.278293035729,0.278369222374,0.278445345687,0.278521405711,0.278597402492,
	0.278673336074,0.278749206504,0.278825013825,0.278900758084,0.278976439323,
	0.279052057590,0.279127612928,0.279203105382,0.279278534997,0.279353901817,
	0.279429205889,0.279504447255,0.279579625961,0.279654742052,0.279729795571,
	0.279804786564,0.279879715076,0.279954581150,0.280029384831,0.280104126163,
	0.280178805192,0.280253421961,0.280327976514,0.280402468897,0.280476899152,
	0.280551267325,0.280625573460,0.280699817601,0.280773999792,0.280848120076,
	0.280922178500,0.280996175105,0.281070109937,0.281143983039,0.281217794455,
	0.281291544230,0.281365232407,0.281438859030,0.281512424143,0.281585927789,
	0.281659370013,0.281732750858,0.281806070368,0.281879328587,0.281952525558,
	0.282025661325,0.282098735931,0.282171749421,0.282244701837,0.282317593223,
	0.282390423622,0.282463193079,0.282535901636,0.282608549337,0.282681136226,
	0.282753662344,0.282826127737,0.282898532446,0.282970876516,0.283043159989,
	0.283115382909,0.283187545318,0.283259647261,0.283331688779,0.283403669916,
	0.283475590716,0.283547451220,0.283619251472,0.283690991515,0.283762671392,
	0.283834291146,0.283905850818,0.283977350454,0.284048790094,0.284120169782,
	0.284191489560,0.284262749472,0.284333949559,0.284405089865,0.284476170432,
	0.284547191302,0.284618152519,0.284689054124,0.284759896160,0.284830678670,
	0.284901401696,0.284972065280,0.285042669464,0.285113214292,0.285183699805,
	0.285254126045,0.285324493055,0.285394800878,0.285465049554,0.285535239126,
	0.285605369637,0.285675441129,0.285745453643,0.285815407221,0.285885301906,
	0.285955137740,0.286024914764,0.286094633020,0.286164292551,0.286233893397,
	0.286303435602,0.286372919206,0.286442344252,0.286511710780,0.286581018834,
	0.286650268454,0.286719459682,0.286788592560,0.286857667129,0.286926683432,
	0.286995641508,0.287064541401,0.287133383150,0.287202166799,0.287270892388,
	0.287339559958,0.287408169552,0.287476721209,0.287545214972,0.287613650882,
	0.287682028980,0.287750349307,0.287818611904,0.287886816813,0.287954964074,
	0.288023053730,0.288091085820,0.288159060385,0.288226977468,0.288294837108,
	0.288362639347,0.288430384225,0.288498071784,0.288565702065,0.288633275107,
	0.288700790952,0.288768249641,0.288835651215,0.288902995714,0.288970283178,
	0.289037513649,0.289104687167,0.289171803773,0.289238863507,0.289305866409,
	0.289372812521,0.289439701883,0.289506534535,0.289573310517,0.289640029871,
	0.289706692636,0.289773298853,0.289839848561,0.289906341802,0.289972778616,
	0.290039159042,0.290105483121,0.290171750894,0.290237962399,0.290304117678,
	0.290370216771,0.290436259717,0.290502246556,0.290568177329,0.290634052076,
	0.290699870836,0.290765633649,0.290831340555,0.290896991595,0.290962586807,
	0.291028126232,0.291093609909,0.291159037879,0.291224410181,0.291289726854,
	0.291354987938,0.291420193473,0.291485343499,0.291550438055,0.291615477180,
	0.291680460914,0.291745389297,0.291810262368,0.291875080166,0.291939842732,
	0.292004550103,0.292069202320,0.292133799423,0.292198341449,0.292262828439,
	0.292327260431,0.292391637466,0.292455959581,0.292520226817,0.292584439212,
	0.292648596806,0.292712699637,0.292776747745,0.292840741168,0.292904679946,
	0.292968564118,0.293032393722,0.293096168797,0.293159889383,0.293223555518,
	0.293287167241,0.293350724591,0.293414227606,0.293477676325,0.293541070788,
	0.293604411032,0.293667697096,0.293730929020,0.293794106841,0.293857230598,
	0.293920300329,0.293983316074,0.294046277871,0.294109185758,0.294172039773,
	0.294234839956,0.294297586344,0.294360278976,0.294422917889,0.294485503124,
	0.294548034717,0.294610512706,0.294672937131,0.294735308030,0.294797625440,
	0.294859889399,0.294922099947,0.294984257120,0.295046360957,0.295108411496,
	0.295170408776,0.295232352833,0.295294243706,0.295356081433,0.295417866052,
	0.295479597600,0.295541276116,0.295602901637,0.295664474201,0.295725993846,
	0.295787460610,0.295848874530,0.295910235644,0.295971543990,0.296032799605,
	0.296094002527,0.296155152793,0.296216250442,0.296277295510,0.296338288035,
	0.296399228054,0.296460115606,0.296520950727,0.296581733455,0.296642463827,
	0.296703141881,0.296763767653,0.296824341182,0.296884862504,0.296945331656,
	0.297005748677,0.297066113602,0.297126426470,0.297186687317,0.297246896180,
	0.297307053097,0.297367158105,0.297427211240,0.297487212540,0.297547162041,
	0.297607059781,0.297666905796,0.297726700124,0.297786442800,0.297846133863,
	0.297905773349,0.297965361294,0.298024897736,0.298084382711,0.298143816256,
	0.298203198407,0.298262529202,0.298321808676,0.298381036867,0.298440213811,
	0.298499339545,0.298558414104,0.298617437527,0.298676409849,0.298735331106,
	0.298794201335,0.298853020573,0.298911788855,0.298970506219,0.299029172700,
	0.299087788335,0.299146353160,0.299204867211,0.299263330525,0.299321743138,
	0.299380105086,0.299438416404,0.299496677130,0.299554887299,0.299613046948,
	0.299671156112,0.299729214827,0.299787223130,0.299845181056,0.299903088641,
	0.299960945922,0.300018752934,0.300076509713
	}
};

double always_inline s08_stage6clip(double x) {
    double f = fabs(x);
    f = f * s08_stage6_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s08_stage6_table.data[0];
    } else if (i >= s08_stage6_table.size-1) {
        f = s08_stage6_table.data[s08_stage6_table.size-1];
    } else {
        f -= i;
        f = s08_stage6_table.data[i]*(1-f) + s08_stage6_table.data[i+1]*f;
    }
    return copysign(f, x);
}


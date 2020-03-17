
// s03_stage3_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  25.354535
 // --table_op  1.000000

struct tables03_stage3 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables03_stage3_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables03_stage3&() const { return *(tables03_stage3*)this; }
};

static tables03_stage3_imp<2048> s03_stage3_table __rt_data = {
	0,0.833333,204.7,2048, {
	0.000000000000,0.003539577025,0.007077728759,0.010614441388,0.014149701123,
	0.017683494193,0.021215806840,0.024746625324,0.028275935921,0.031803724922,
	0.035329978632,0.038854683372,0.042377825477,0.045899391295,0.049419367189,
	0.052937739536,0.056454494724,0.059969619156,0.063483099247,0.066994921423,
	0.070505072123,0.074013537798,0.077520304908,0.081025359927,0.084528689338,
	0.088030279634,0.091530117319,0.095028188906,0.098524480918,0.102018979886,
	0.105511672352,0.109002544864,0.112491583980,0.115978776265,0.119464108291,
	0.122947566639,0.126429137895,0.129908808654,0.133386565514,0.136862395081,
	0.140336283968,0.143808218792,0.147278186174,0.150746172742,0.154212165126,
	0.157676149963,0.161138113892,0.164598043555,0.168055925600,0.171511746676,
	0.174965493434,0.178417152529,0.181866710616,0.185314154355,0.188759470403,
	0.192202645423,0.195643666075,0.199082519020,0.202519190922,0.205953668441,
	0.209385938239,0.212815986978,0.216243801316,0.219669367911,0.223092673422,
	0.226513704501,0.229932447802,0.233348889974,0.236763017664,0.240174817516,
	0.243584276169,0.246991380261,0.250396116423,0.253798471284,0.257198431465,
	0.260595983585,0.263991114256,0.267383810085,0.270774057673,0.274161843614,
	0.277547154496,0.280929976899,0.284310297398,0.287688102557,0.291063378936,
	0.294436113083,0.297806291541,0.301173900841,0.304538927507,0.307901358053,
	0.311261178982,0.314618376789,0.317972937956,0.321324848957,0.324674096252,
	0.328020666292,0.331364545516,0.334705720350,0.338044177207,0.341379902490,
	0.344712882586,0.348043103870,0.351370552704,0.354695215434,0.358017078395,
	0.361336127904,0.364652350264,0.367965731764,0.371276258676,0.374583917256,
	0.377888693745,0.381190574367,0.384489545327,0.387785592816,0.391078703005,
	0.394368862048,0.397656056080,0.400940271219,0.404221493561,0.407499709187,
	0.410774904155,0.414047064504,0.417316176253,0.420582225400,0.423845197923,
	0.427105079776,0.430361856895,0.433615515192,0.436866040556,0.440113418854,
	0.443357635932,0.446598677608,0.449836529682,0.453071177925,0.456302608086,
	0.459530805889,0.462755757032,0.465977447189,0.469195862007,0.472410987107,
	0.475622808083,0.478831310505,0.482036479912,0.485238301816,0.488436761704,
	0.491631845032,0.494823537227,0.498011823689,0.501196689788,0.504378120863,
	0.507556102225,0.510730619151,0.513901656892,0.517069200664,0.520233235653,
	0.523393747013,0.526550719865,0.529704139298,0.532853990368,0.536000258098,
	0.539142927476,0.542281983457,0.545417410961,0.548549194873,0.551677320043,
	0.554801771285,0.557922533377,0.561039591062,0.564152929045,0.567262531994,
	0.570368384538,0.573470471272,0.576568776749,0.579663285486,0.582753981958,
	0.585840850604,0.588923875820,0.592003041965,0.595078333355,0.598149734267,
	0.601217228934,0.604280801549,0.607340436265,0.610396117188,0.613447828385,
	0.616495553877,0.619539277644,0.622578983621,0.625614655696,0.628646277717,
	0.631673833483,0.634697306748,0.637716681222,0.640731940568,0.643743068400,
	0.646750048287,0.649752863751,0.652751498265,0.655745935253,0.658736158091,
	0.661722150108,0.664703894579,0.667681374734,0.670654573750,0.673623474753,
	0.676588060819,0.679548314973,0.682504220188,0.685455759384,0.688402915429,
	0.691345671138,0.694284009272,0.697217912540,0.700147363594,0.703072345034,
	0.705992839405,0.708908829195,0.711820296837,0.714727224710,0.717629595133,
	0.720527390371,0.723420592630,0.726309184059,0.729193146751,0.732072462737,
	0.734947113993,0.737817082432,0.740682349912,0.743542898227,0.746398709113,
	0.749249764246,0.752096045240,0.754937533647,0.757774210959,0.760606058605,
	0.763433057952,0.766255190305,0.769072436903,0.771884778925,0.774692197485,
	0.777494673633,0.780292188353,0.783084722567,0.785872257130,0.788654772831,
	0.791432250396,0.794204670482,0.796972013680,0.799734260516,0.802491391447,
	0.805243386864,0.807990227089,0.810731892378,0.813468362917,0.816199618824,
	0.818925640148,0.821646406868,0.824361898896,0.827072096072,0.829776978167,
	0.832476524882,0.835170715847,0.837859530622,0.840542948694,0.843220949482,
	0.845893512331,0.848560616516,0.851222241239,0.853878365630,0.856528968747,
	0.859174029576,0.861813527030,0.864447439949,0.867075747100,0.869698427177,
	0.872315458800,0.874926820517,0.877532490802,0.880132448053,0.882726670597,
	0.885315136687,0.887897824499,0.890474712139,0.893045777636,0.895610998944,
	0.898170353947,0.900723820449,0.903271376185,0.905812998811,0.908348665913,
	0.910878354998,0.913402043502,0.915919708786,0.918431328136,0.920936878764,
	0.923436337810,0.925929682336,0.928416889333,0.930897935717,0.933372798332,
	0.935841453947,0.938303879258,0.940760050888,0.943209945387,0.945653539233,
	0.948090808831,0.950521730513,0.952946280542,0.955364435106,0.957776170324,
	0.960181462244,0.962580286842,0.964972620026,0.967358437632,0.969737715430,
	0.972110429117,0.974476554326,0.976836066619,0.979188941492,0.981535154374,
	0.983874680628,0.986207495551,0.988533574377,0.990852892274,0.993165424346,
	0.995471145635,0.997770031122,1.000062055724,1.002347194301,1.004625421650,
	1.006896712511,1.009161041566,1.011418383439,1.013668712700,1.015912003862,
	1.018148231385,1.020377369676,1.022599393090,1.024814275931,1.027021992454,
	1.029222516867,1.031415823328,1.033601885951,1.035780678806,1.037952175919,
	1.040116351275,1.042273178818,1.044422632455,1.046564686053,1.048699313447,
	1.050826488434,1.052946184781,1.055058376226,1.057163036474,1.059260139207,
	1.061349658079,1.063431566722,1.065505838746,1.067572447742,1.069631367284,
	1.071682570931,1.073726032227,1.075761724708,1.077789621898,1.079809697319,
	1.081821924484,1.083826276909,1.085822728108,1.087811251600,1.089791820910,
	1.091764409569,1.093728991124,1.095685539133,1.097634027171,1.099574428834,
	1.101506717740,1.103430867533,1.105346851887,1.107254644505,1.109154219129,
	1.111045549536,1.112928609547,1.114803373026,1.116669813888,1.118527906098,
	1.120377623678,1.122218940708,1.124051831332,1.125876269760,1.127692230273,
	1.129499687227,1.131298615056,1.133088988275,1.134870781489,1.136643969391,
	1.138408526770,1.140164428514,1.141911649615,1.143650165175,1.145379950406,
	1.147100980638,1.148813231325,1.150516678046,1.152211296513,1.153897062571,
	1.155573952212,1.157241941570,1.158901006932,1.160551124743,1.162192271607,
	1.163824424297,1.165447559761,1.167061655120,1.168666687681,1.170262634942,
	1.171849474592,1.173427184523,1.174995742832,1.176555127828,1.178105318038,
	1.179646292212,1.181178029332,1.182700508613,1.184213709512,1.185717611738,
	1.187212195248,1.188697440265,1.190173327276,1.191639837041,1.193096950602,
	1.194544649284,1.195982914707,1.197411728789,1.198831073755,1.200240932140,
	1.201641286801,1.203032120917,1.204413418004,1.205785161913,1.207147336844,
	1.208499927348,1.209842918337,1.211176295089,1.212500043255,1.213814148866,
	1.215118598342,1.216413378495,1.217698476539,1.218973880096,1.220239577203,
	1.221495556317,1.222741806326,1.223978316551,1.225205076758,1.226422077160,
	1.227629308428,1.228826761692,1.230014428557,1.231192301099,1.232360371881,
	1.233518633954,1.234667080864,1.235805706661,1.236934505905,1.238053473669,
	1.239162605551,1.240261897676,1.241351346703,1.242430949832,1.243500704809,
	1.244560609935,1.245610664066,1.246650866625,1.247681217605,1.248701717572,
	1.249712367675,1.250713169649,1.251704125821,1.252685239112,1.253656513048,
	1.254617951760,1.255569559989,1.256511343093,1.257443307049,1.258365458460,
	1.259277804554,1.260180353194,1.261073112877,1.261956092743,1.262829302570,
	1.263692752785,1.264546454464,1.265390419334,1.266224659777,1.267049188833,
	1.267864020199,1.268669168235,1.269464647965,1.270250475074,1.271026665917,
	1.271793237514,1.272550207554,1.273297594395,1.274035417065,1.274763695260,
	1.275482449347,1.276191700362,1.276891470011,1.277581780666,1.278262655369,
	1.278934117827,1.279596192412,1.280248904159,1.280892278764,1.281526342583,
	1.282151122628,1.282766646563,1.283372942707,1.283970040023,1.284557968120,
	1.285136757249,1.285706438294,1.286267042775,1.286818602838,1.287361151255,
	1.287894721412,1.288419347313,1.288935063567,1.289441905386,1.289939908577,
	1.290429109540,1.290909545255,1.291381253283,1.291844271752,1.292298639355,
	1.292744395340,1.293181579503,1.293610232183,1.294030394250,1.294442107098,
	1.294845412637,1.295240353288,1.295626971968,1.296005312084,1.296375417525,
	1.296737332653,1.297091102289,1.297436771709,1.297774386632,1.298103993209,
	1.298425638014,1.298739368035,1.299045230661,1.299343273674,1.299633545236,
	1.299916093881,1.300190968502,1.300458218341,1.300717892978,1.300970042321,
	1.301214716592,1.301451966319,1.301681842320,1.301904395699,1.302119677828,
	1.302327740338,1.302528635107,1.302722414250,1.302909130105,1.303088835223,
	1.303261582358,1.303427424450,1.303586414620,1.303738606154,1.303884052492,
	1.304022807219,1.304154924051,1.304280456824,1.304399459483,1.304511986071,
	1.304618090716,1.304717827622,1.304811251056,1.304898415338,1.304979374831,
	1.305054183925,1.305122897033,1.305185568576,1.305242252973,1.305293004631,
	1.305337877935,1.305376927235,1.305410206841,1.305437771007,1.305459673925,
	1.305475969714,1.305486712410,1.305491955956,1.305491754194,1.305486160855,
	1.305475229551,1.305459013764,1.305437566838,1.305410941970,1.305379192204,
	1.305342370420,1.305300529326,1.305253721451,1.305201999138,1.305145414534,
	1.305084019583,1.305017866023,1.304947005371,1.304871488924,1.304791367747,
	1.304706692668,1.304617514272,1.304523882896,1.304425848619,1.304323461260,
	1.304216770371,1.304105825232,1.303990674843,1.303871367923,1.303747952902,
	1.303620477917,1.303488990809,1.303353539116,1.303214170069,1.303070930591,
	1.302923867289,1.302773026452,1.302618454050,1.302460195724,1.302298296791,
	1.302132802233,1.301963756702,1.301791204508,1.301615189626,1.301435755686,
	1.301252945975,1.301066803433,1.300877370652,1.300684689873,1.300488802986,
	1.300289751526,1.300087576674,1.299882319254,1.299674019733,1.299462718220,
	1.299248454464,1.299031267854,1.298811197417,1.298588281821,1.298362559371,
	1.298134068010,1.297902845319,1.297668928517,1.297432354462,1.297193159647,
	1.296951380208,1.296707051915,1.296460210180,1.296210890054,1.295959126229,
	1.295704953037,1.295448404453,1.295189514095,1.294928315225,1.294664840750,
	1.294399123222,1.294131194843,1.293861087462,1.293588832579,1.293314461345,
	1.293038004565,1.292759492698,1.292478955861,1.292196423827,1.291911926031,
	1.291625491570,1.291337149202,1.291046927353,1.290754854116,1.290460957253,
	1.290165264199,1.289867802062,1.289568597625,1.289267677351,1.288965067383,
	1.288660793545,1.288354881348,1.288047355988,1.287738242354,1.287427565023,
	1.287115348269,1.286801616063,1.286486392073,1.286169699671,1.285851561932,
	1.285532001638,1.285211041281,1.284888703064,1.284565008905,1.284239980437,
	1.283913639016,1.283586005716,1.283257101340,1.282926946415,1.282595561200,
	1.282262965684,1.281929179593,1.281594222391,1.281258113282,1.280920871212,
	1.280582514874,1.280243062707,1.279902532905,1.279560943411,1.279218311926,
	1.278874655910,1.278529992584,1.278184338932,1.277837711705,1.277490127423,
	1.277141602378,1.276792152636,1.276441794038,1.276090542207,1.275738412546,
	1.275385420241,1.275031580268,1.274676907389,1.274321416160,1.273965120930,
	1.273608035845,1.273250174849,1.272891551689,1.272532179915,1.272172072883,
	1.271811243759,1.271449705517,1.271087470948,1.270724552655,1.270360963062,
	1.269996714411,1.269631818767,1.269266288020,1.268900133887,1.268533367915,
	1.268166001479,1.267798045791,1.267429511898,1.267060410682,1.266690752869,
	1.266320549024,1.265949809558,1.265578544726,1.265206764632,1.264834479232,
	1.264461698332,1.264088431592,1.263714688531,1.263340478521,1.262965810799,
	1.262590694462,1.262215138469,1.261839151647,1.261462742689,1.261085920159,
	1.260708692490,1.260331067989,1.259953054837,1.259574661093,1.259195894690,
	1.258816763447,1.258437275058,1.258057437105,1.257677257051,1.257296742250,
	1.256915899938,1.256534737247,1.256153261194,1.255771478694,1.255389396553,
	1.255007021473,1.254624360055,1.254241418797,1.253858204098,1.253474722258,
	1.253090979480,1.252706981873,1.252322735450,1.251938246132,1.251553519748,
	1.251168562038,1.250783378652,1.250397975153,1.250012357017,1.249626529638,
	1.249240498321,1.248854268294,1.248467844701,1.248081232605,1.247694436993,
	1.247307462771,1.246920314772,1.246532997750,1.246145516388,1.245757875294,
	1.245370079004,1.244982131983,1.244594038626,1.244205803261,1.243817430145,
	1.243428923470,1.243040287361,1.242651525881,1.242262643027,1.241873642731,
	1.241484528868,1.241095305248,1.240705975622,1.240316543683,1.239927013064,
	1.239537387341,1.239147670036,1.238757864611,1.238367974476,1.237978002987,
	1.237587953447,1.237197829104,1.236807633158,1.236417368757,1.236027038998,
	1.235636646929,1.235246195552,1.234855687817,1.234465126632,1.234074514855,
	1.233683855300,1.233293150735,1.232902403886,1.232511617434,1.232120794018,
	1.231729936233,1.231339046636,1.230948127739,1.230557182018,1.230166211906,
	1.229775219799,1.229384208054,1.228993178991,1.228602134891,1.228211078000,
	1.227820010528,1.227428934650,1.227037852503,1.226646766193,1.226255677791,
	1.225864589336,1.225473502831,1.225082420249,1.224691343532,1.224300274590,
	1.223909215300,1.223518167512,1.223127133045,1.222736113688,1.222345111201,
	1.221954127317,1.221563163740,1.221172222146,1.220781304186,1.220390411481,
	1.219999545628,1.219608708198,1.219217900736,1.218827124762,1.218436381772,
	1.218045673236,1.217655000603,1.217264365296,1.216873768715,1.216483212238,
	1.216092697222,1.215702224999,1.215311796880,1.214921414157,1.214531078099,
	1.214140789953,1.213750550949,1.213360362293,1.212970225176,1.212580140765,
	1.212190110210,1.211800134643,1.211410215176,1.211020352903,1.210630548900,
	1.210240804226,1.209851119922,1.209461497013,1.209071936506,1.208682439391,
	1.208293006644,1.207903639222,1.207514338067,1.207125104108,1.206735938256,
	1.206346841408,1.205957814445,1.205568858235,1.205179973630,1.204791161471,
	1.204402422582,1.204013757773,1.203625167843,1.203236653577,1.202848215746,
	1.202459855109,1.202071572411,1.201683368387,1.201295243758,1.200907199234,
	1.200519235512,1.200131353277,1.199743553205,1.199355835958,1.198968202189,
	1.198580652539,1.198193187638,1.197805808105,1.197418514551,1.197031307574,
	1.196644187764,1.196257155699,1.195870211948,1.195483357072,1.195096591621,
	1.194709916135,1.194323331147,1.193936837178,1.193550434744,1.193164124348,
	1.192777906488,1.192391781651,1.192005750318,1.191619812959,1.191233970038,
	1.190848222012,1.190462569327,1.190077012423,1.189691551733,1.189306187682,
	1.188920920688,1.188535751162,1.188150679505,1.187765706116,1.187380831383,
	1.186996055690,1.186611379412,1.186226802919,1.185842326575,1.185457950735,
	1.185073675750,1.184689501966,1.184305429720,1.183921459345,1.183537591166,
	1.183153825506,1.182770162679,1.182386602995,1.182003146758,1.181619794266,
	1.181236545813,1.180853401687,1.180470362170,1.180087427542,1.179704598074,
	1.179321874034,1.178939255687,1.178556743289,1.178174337096,1.177792037356,
	1.177409844313,1.177027758208,1.176645779276,1.176263907750,1.175882143855,
	1.175500487816,1.175118939851,1.174737500174,1.174356168997,1.173974946527,
	1.173593832966,1.173212828515,1.172831933367,1.172451147716,1.172070471749,
	1.171689905651,1.171309449604,1.170929103784,1.170548868367,1.170168743523,
	1.169788729419,1.169408826221,1.169029034089,1.168649353182,1.168269783654,
	1.167890325657,1.167510979342,1.167131744852,1.166752622332,1.166373611923,
	1.165994713760,1.165615927980,1.165237254714,1.164858694091,1.164480246239,
	1.164101911281,1.163723689338,1.163345580531,1.162967584975,1.162589702785,
	1.162211934072,1.161834278946,1.161456737514,1.161079309881,1.160701996149,
	1.160324796419,1.159947710789,1.159570739354,1.159193882210,1.158817139447,
	1.158440511157,1.158063997425,1.157687598339,1.157311313983,1.156935144437,
	1.156559089784,1.156183150099,1.155807325461,1.155431615944,1.155056021621,
	1.154680542562,1.154305178838,1.153929930516,1.153554797663,1.153179780342,
	1.152804878616,1.152430092547,1.152055422195,1.151680867618,1.151306428873,
	1.150932106014,1.150557899096,1.150183808170,1.149809833289,1.149435974500,
	1.149062231853,1.148688605395,1.148315095170,1.147941701223,1.147568423598,
	1.147195262334,1.146822217474,1.146449289055,1.146076477117,1.145703781696,
	1.145331202827,1.144958740545,1.144586394883,1.144214165874,1.143842053548,
	1.143470057936,1.143098179067,1.142726416969,1.142354771668,1.141983243190,
	1.141611831561,1.141240536804,1.140869358943,1.140498297999,1.140127353993,
	1.139756526947,1.139385816878,1.139015223805,1.138644747746,1.138274388717,
	1.137904146735,1.137534021814,1.137164013969,1.136794123212,1.136424349556,
	1.136054693013,1.135685153595,1.135315731310,1.134946426169,1.134577238181,
	1.134208167353,1.133839213693,1.133470377207,1.133101657902,1.132733055782,
	1.132364570852,1.131996203117,1.131627952578,1.131259819240,1.130891803104,
	1.130523904170,1.130156122442,1.129788457917,1.129420910596,1.129053480479,
	1.128686167562,1.128318971845,1.127951893325,1.127584931998,1.127218087861,
	1.126851360909,1.126484751138,1.126118258542,1.125751883116,1.125385624853,
	1.125019483747,1.124653459790,1.124287552975,1.123921763294,1.123556090737,
	1.123190535295,1.122825096960,1.122459775722,1.122094571569,1.121729484491,
	1.121364514477,1.120999661516,1.120634925595,1.120270306701,1.119905804823,
	1.119541419947,1.119177152058,1.118813001145,1.118448967191,1.118085050183,
	1.117721250105,1.117357566943,1.116994000680,1.116630551300,1.116267218787,
	1.115904003125,1.115540904296,1.115177922284,1.114815057070,1.114452308636,
	1.114089676965,1.113727162038,1.113364763835,1.113002482339,1.112640317529,
	1.112278269386,1.111916337890,1.111554523021,1.111192824758,1.110831243081,
	1.110469777969,1.110108429400,1.109747197353,1.109386081807,1.109025082739,
	1.108664200127,1.108303433948,1.107942784181,1.107582250803,1.107221833789,
	1.106861533118,1.106501348765,1.106141280706,1.105781328919,1.105421493378,
	1.105061774059,1.104702170938,1.104342683990,1.103983313191,1.103624058514,
	1.103264919935,1.102905897429,1.102546990969,1.102188200530,1.101829526087,
	1.101470967612,1.101112525079,1.100754198462,1.100395987735,1.100037892870,
	1.099679913841,1.099322050620,1.098964303181,1.098606671495,1.098249155536,
	1.097891755275,1.097534470684,1.097177301737,1.096820248404,1.096463310657,
	1.096106488469,1.095749781810,1.095393190652,1.095036714965,1.094680354722,
	1.094324109894,1.093967980450,1.093611966362,1.093256067600,1.092900284136,
	1.092544615939,1.092189062979,1.091833625228,1.091478302654,1.091123095229,
	1.090768002921,1.090413025701,1.090058163538,1.089703416402,1.089348784263,
	1.088994267089,1.088639864851,1.088285577517,1.087931405056,1.087577347438,
	1.087223404631,1.086869576605,1.086515863328,1.086162264769,1.085808780896,
	1.085455411678,1.085102157084,1.084749017081,1.084395991639,1.084043080725,
	1.083690284308,1.083337602355,1.082985034835,1.082632581716,1.082280242965,
	1.081928018551,1.081575908441,1.081223912603,1.080872031004,1.080520263613,
	1.080168610396,1.079817071321,1.079465646356,1.079114335467,1.078763138623,
	1.078412055790,1.078061086935,1.077710232026,1.077359491030,1.077008863913,
	1.076658350643,1.076307951187,1.075957665511,1.075607493583,1.075257435368,
	1.074907490834,1.074557659948,1.074207942676,1.073858338985,1.073508848841,
	1.073159472211,1.072810209061,1.072461059358,1.072112023068,1.071763100158,
	1.071414290593,1.071065594341,1.070717011367,1.070368541637,1.070020185119,
	1.069671941777,1.069323811578,1.068975794488,1.068627890473,1.068280099500,
	1.067932421533,1.067584856540,1.067237404486,1.066890065336,1.066542839058,
	1.066195725616,1.065848724976,1.065501837105,1.065155061968,1.064808399530,
	1.064461849758,1.064115412617,1.063769088073,1.063422876091,1.063076776637,
	1.062730789677,1.062384915176,1.062039153100,1.061693503414,1.061347966084,
	1.061002541076,1.060657228354,1.060312027884,1.059966939632,1.059621963564,
	1.059277099643,1.058932347837,1.058587708110,1.058243180428,1.057898764755,
	1.057554461058,1.057210269301,1.056866189451,1.056522221471,1.056178365328,
	1.055834620987,1.055490988412,1.055147467570,1.054804058425,1.054460760942,
	1.054117575088,1.053774500826,1.053431538122,1.053088686942,1.052745947250,
	1.052403319012,1.052060802192,1.051718396756,1.051376102669,1.051033919896,
	1.050691848403,1.050349888153,1.050008039113,1.049666301247,1.049324674520,
	1.048983158898,1.048641754345,1.048300460827,1.047959278309,1.047618206755,
	1.047277246131,1.046936396401,1.046595657531,1.046255029486,1.045914512231,
	1.045574105730,1.045233809949,1.044893624853,1.044553550407,1.044213586575,
	1.043873733323,1.043533990615,1.043194358417,1.042854836694,1.042515425410,
	1.042176124531,1.041836934022,1.041497853847,1.041158883971,1.040820024360,
	1.040481274978,1.040142635791,1.039804106762,1.039465687858,1.039127379044,
	1.038789180283,1.038451091542,1.038113112785,1.037775243977,1.037437485083,
	1.037099836068,1.036762296897,1.036424867534,1.036087547946,1.035750338097,
	1.035413237951,1.035076247474,1.034739366631,1.034402595387,1.034065933706,
	1.033729381554,1.033392938896,1.033056605697,1.032720381921,1.032384267533,
	1.032048262500,1.031712366784,1.031376580353,1.031040903170,1.030705335200,
	1.030369876410,1.030034526762,1.029699286224,1.029364154759,1.029029132333,
	1.028694218910,1.028359414456,1.028024718936,1.027690132314,1.027355654556,
	1.027021285627,1.026687025492,1.026352874116,1.026018831464,1.025684897501,
	1.025351072192,1.025017355503,1.024683747397,1.024350247841,1.024016856799,
	1.023683574237,1.023350400120,1.023017334412,1.022684377079,1.022351528086,
	1.022018787398,1.021686154981,1.021353630798,1.021021214816,1.020688907000,
	1.020356707315,1.020024615725,1.019692632197,1.019360756695,1.019028989184,
	1.018697329630,1.018365777998,1.018034334252,1.017702998359,1.017371770284,
	1.017040649991,1.016709637445,1.016378732613,1.016047935460,1.015717245949,
	1.015386664048,1.015056189721,1.014725822933,1.014395563650,1.014065411836,
	1.013735367458,1.013405430480,1.013075600869,1.012745878588,1.012416263603,
	1.012086755881,1.011757355385,1.011428062082,1.011098875937,1.010769796914,
	1.010440824981,1.010111960101,1.009783202240,1.009454551364,1.009126007438,
	1.008797570428,1.008469240298,1.008141017015,1.007812900543,1.007484890848,
	1.007156987896,1.006829191653,1.006501502082,1.006173919151,1.005846442824,
	1.005519073067,1.005191809845,1.004864653125,1.004537602871,1.004210659049,
	1.003883821624,1.003557090563,1.003230465830,1.002903947391,1.002577535212,
	1.002251229259,1.001925029496,1.001598935890,1.001272948406,1.000947067010,
	1.000621291667,1.000295622343,0.999970059003,0.999644601614,0.999319250141,
	0.998994004550,0.998668864805,0.998343830874,0.998018902721,0.997694080313,
	0.997369363615,0.997044752592,0.996720247211,0.996395847438,0.996071553237,
	0.995747364575,0.995423281418,0.995099303731,0.994775431480,0.994451664631,
	0.994128003150,0.993804447002,0.993480996153,0.993157650570,0.992834410218,
	0.992511275063,0.992188245071,0.991865320207,0.991542500438,0.991219785729,
	0.990897176046,0.990574671356,0.990252271624,0.989929976816,0.989607786898,
	0.989285701836,0.988963721596,0.988641846144,0.988320075446,0.987998409467,
	0.987676848175,0.987355391534,0.987034039512,0.986712792073,0.986391649185,
	0.986070610812,0.985749676922,0.985428847480,0.985108122452,0.984787501804,
	0.984466985503,0.984146573513,0.983826265802,0.983506062336,0.983185963080,
	0.982865968001,0.982546077066,0.982226290240,0.981906607489,0.981587028780,
	0.981267554079,0.980948183353,0.980628916566,0.980309753687,0.979990694680,
	0.979671739513,0.979352888151,0.979034140560,0.978715496708,0.978396956560,
	0.978078520082,0.977760187242,0.977441958004,0.977123832337,0.976805810205,
	0.976487891575,0.976170076415,0.975852364689,0.975534756364,0.975217251408,
	0.974899849785,0.974582551464,0.974265356409,0.973948264588,0.973631275967,
	0.973314390512,0.972997608190,0.972680928967,0.972364352811,0.972047879686,
	0.971731509561,0.971415242400,0.971099078172,0.970783016842,0.970467058377,
	0.970151202744,0.969835449909,0.969519799838,0.969204252499,0.968888807858,
	0.968573465881,0.968258226535,0.967943089787,0.967628055604,0.967313123951,
	0.966998294796,0.966683568106,0.966368943847,0.966054421985,0.965740002488,
	0.965425685322,0.965111470454,0.964797357851,0.964483347479,0.964169439305,
	0.963855633296,0.963541929419,0.963228327640,0.962914827927,0.962601430246,
	0.962288134563,0.961974940847,0.961661849063,0.961348859178,0.961035971160,
	0.960723184974,0.960410500589,0.960097917971,0.959785437087,0.959473057903,
	0.959160780387,0.958848604506,0.958536530226,0.958224557515,0.957912686339,
	0.957600916666,0.957289248462,0.956977681694,0.956666216330,0.956354852337,
	0.956043589681,0.955732428329,0.955421368249,0.955110409408,0.954799551772,
	0.954488795309,0.954178139986,0.953867585770,0.953557132628,0.953246780527,
	0.952936529435,0.952626379318,0.952316330144,0.952006381879,0.951696534492,
	0.951386787948,0.951077142216,0.950767597263,0.950458153055,0.950148809560,
	0.949839566746,0.949530424579,0.949221383026,0.948912442056,0.948603601635,
	0.948294861731,0.947986222310,0.947677683341,0.947369244790,0.947060906625,
	0.946752668813,0.946444531321,0.946136494118,0.945828557170,0.945520720444,
	0.945212983909,0.944905347531,0.944597811277,0.944290375116,0.943983039015,
	0.943675802941,0.943368666862,0.943061630744,0.942754694556,0.942447858266,
	0.942141121839,0.941834485245,0.941527948450,0.941221511423,0.940915174130,
	0.940608936539,0.940302798618,0.939996760335,0.939690821656,0.939384982550,
	0.939079242983,0.938773602925,0.938468062342,0.938162621202,0.937857279472,
	0.937552037121,0.937246894115,0.936941850424,0.936636906013,0.936332060852,
	0.936027314907,0.935722668146,0.935418120538,0.935113672049,0.934809322649,
	0.934505072303,0.934200920981,0.933896868649,0.933592915277,0.933289060830,
	0.932985305279,0.932681648589,0.932378090729,0.932074631667,0.931771271371,
	0.931468009808,0.931164846946,0.930861782754,0.930558817199,0.930255950249,
	0.929953181872,0.929650512036,0.929347940709,0.929045467859,0.928743093453,
	0.928440817460,0.928138639848,0.927836560584,0.927534579637,0.927232696975,
	0.926930912566,0.926629226377,0.926327638377,0.926026148533,0.925724756815,
	0.925423463189,0.925122267625,0.924821170089,0.924520170551,0.924219268978,
	0.923918465339,0.923617759601,0.923317151733,0.923016641702,0.922716229478,
	0.922415915028,0.922115698320,0.921815579323,0.921515558004,0.921215634333,
	0.920915808276,0.920616079803,0.920316448882,0.920016915481,0.919717479568,
	0.919418141111,0.919118900079,0.918819756440,0.918520710163,0.918221761215,
	0.917922909565,0.917624155182,0.917325498033,0.917026938087,0.916728475313,
	0.916430109678,0.916131841152,0.915833669702,0.915535595297,0.915237617905,
	0.914939737496,0.914641954036,0.914344267495,0.914046677842,0.913749185044,
	0.913451789070,0.913154489889,0.912857287469,0.912560181778,0.912263172786,
	0.911966260460,0.911669444770,0.911372725683,0.911076103168,0.910779577195,
	0.910483147731,0.910186814745,0.909890578206,0.909594438081,0.909298394341,
	0.909002446954,0.908706595887,0.908410841111,0.908115182592,0.907819620302,
	0.907524154206,0.907228784276,0.906933510478,0.906638332783,0.906343251158,
	0.906048265573,0.905753375996,0.905458582396,0.905163884741,0.904869283001,
	0.904574777145,0.904280367140,0.903986052956,0.903691834562,0.903397711926,
	0.903103685017,0.902809753805,0.902515918258,0.902222178344,0.901928534034,
	0.901634985295,0.901341532096,0.901048174407,0.900754912197,0.900461745433,
	0.900168674086,0.899875698124,0.899582817516,0.899290032232,0.898997342239,
	0.898704747508,0.898412248006,0.898119843704,0.897827534569,0.897535320572,
	0.897243201681,0.896951177865,0.896659249093,0.896367415335,0.896075676559,
	0.895784032735,0.895492483831,0.895201029817,0.894909670662,0.894618406334,
	0.894327236804,0.894036162040,0.893745182011,0.893454296687,0.893163506037,
	0.892872810029,0.892582208634,0.892291701820,0.892001289556,0.891710971812,
	0.891420748558,0.891130619761,0.890840585392,0.890550645420,0.890260799814,
	0.889971048543,0.889681391577,0.889391828885,0.889102360436,0.888812986200,
	0.888523706145,0.888234520242,0.887945428460,0.887656430767,0.887367527134,
	0.887078717530,0.886790001924,0.886501380285,0.886212852584,0.885924418789,
	0.885636078869,0.885347832795,0.885059680536,0.884771622061,0.884483657340,
	0.884195786342,0.883908009037,0.883620325394,0.883332735382,0.883045238972,
	0.882757836133,0.882470526833,0.882183311044,0.881896188735,0.881609159874,
	0.881322224432,0.881035382378,0.880748633682,0.880461978313,0.880175416242,
	0.879888947437,0.879602571868,0.879316289506,0.879030100319,0.878744004277,
	0.878458001350,0.878172091509,0.877886274721,0.877600550958,0.877314920188,
	0.877029382383,0.876743937510,0.876458585541,0.876173326444,0.875888160190,
	0.875603086748,0.875318106089,0.875033218182,0.874748422996,0.874463720502,
	0.874179110670,0.873894593469,0.873610168869,0.873325836840,0.873041597352,
	0.872757450374,0.872473395878,0.872189433832,0.871905564206,0.871621786971,
	0.871338102096,0.871054509552,0.870771009308,0.870487601333,0.870204285599,
	0.869921062076,0.869637930732,0.869354891538,0.869071944465,0.868789089481,
	0.868506326558,0.868223655665,0.867941076773,0.867658589850,0.867376194868,
	0.867093891797,0.866811680606,0.866529561266,0.866247533746,0.865965598017,
	0.865683754049,0.865402001813,0.865120341278,0.864838772414,0.864557295191,
	0.864275909581,0.863994615552,0.863713413076,0.863432302122,0.863151282660,
	0.862870354661,0.862589518095,0.862308772933,0.862028119144,0.861747556698,
	0.861467085567,0.861186705720,0.860906417128,0.860626219761,0.860346113588,
	0.860066098582,0.859786174711,0.859506341946,0.859226600258,0.858946949617,
	0.858667389993,0.858387921357,0.858108543679,0.857829256929,0.857550061078,
	0.857270956097,0.856991941955,0.856713018623,0.856434186072,0.856155444271,
	0.855876793192,0.855598232806,0.855319763081,0.855041383990,0.854763095502,
	0.854484897588,0.854206790218,0.853928773363,0.853650846994,0.853373011081,
	0.853095265595,0.852817610506,0.852540045784,0.852262571401,0.851985187327,
	0.851707893533,0.851430689988,0.851153576665,0.850876553533,0.850599620563,
	0.850322777726,0.850046024993,0.849769362333,0.849492789718,0.849216307119,
	0.848939914506,0.848663611850,0.848387399121,0.848111276291,0.847835243330,
	0.847559300209,0.847283446898,0.847007683369,0.846732009592,0.846456425537,
	0.846180931177,0.845905526481,0.845630211421,0.845354985966,0.845079850089,
	0.844804803760,0.844529846949,0.844254979628,0.843980201767,0.843705513338,
	0.843430914311,0.843156404657,0.842881984347,0.842607653352,0.842333411643,
	0.842059259191,0.841785195967,0.841511221941,0.841237337085,0.840963541370,
	0.840689834767,0.840416217246,0.840142688779,0.839869249337,0.839595898890,
	0.839322637410,0.839049464869,0.838776381235,0.838503386482,0.838230480580,
	0.837957663500,0.837684935213,0.837412295691,0.837139744903,0.836867282823,
	0.836594909420,0.836322624666,0.836050428531,0.835778320988,0.835506302007,
	0.835234371559,0.834962529616,0.834690776149,0.834419111129,0.834147534527,
	0.833876046315,0.833604646463,0.833333334943
	}
};

double always_inline s03_stage3clip(double x) {
    double f = fabs(x);
    f = f * s03_stage3_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s03_stage3_table.data[0];
    } else if (i >= s03_stage3_table.size-1) {
        f = s03_stage3_table.data[s03_stage3_table.size-1];
    } else {
        f -= i;
        f = s03_stage3_table.data[i]*(1-f) + s03_stage3_table.data[i+1]*f;
    }
    return copysign(f, x);
}


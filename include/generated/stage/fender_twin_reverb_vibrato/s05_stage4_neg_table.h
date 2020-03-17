
// s05_stage4_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  9.963310
 // --table_op  1.000000

struct tables05_stage4_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables05_stage4_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables05_stage4_neg&() const { return *(tables05_stage4_neg*)this; }
};

static tables05_stage4_neg_imp<2048> s05_stage4_neg_table __rt_data = {
	0,0.793155,204.7,2048, {
	0.000000000000,0.009771563775,0.019487562211,0.029148271879,0.038753968200,
	0.048304925439,0.057801416712,0.067243713985,0.076632088079,0.085966808666,
	0.095248144280,0.104476362311,0.113651729012,0.122774509502,0.131844967763,
	0.140863366649,0.149829967883,0.158745032063,0.167608818662,0.176421586034,
	0.185183591411,0.193895090911,0.202556339538,0.211167591184,0.219729098632,
	0.228241113563,0.236703886550,0.245117667069,0.253482703498,0.261799243118,
	0.270067532120,0.278287815606,0.286460337590,0.294585341005,0.302663067700,
	0.310693758449,0.318677652950,0.326614989831,0.334506006647,0.342350939891,
	0.350150024992,0.357903496319,0.365611587184,0.373274529844,0.380892555509,
	0.388465894336,0.395994775442,0.403479426901,0.410920075749,0.418316947985,
	0.425670268578,0.432980261468,0.440247149570,0.447471154773,0.454652497951,
	0.461791398960,0.468888076643,0.475942748834,0.482955632360,0.489926943047,
	0.496856895717,0.503745704201,0.510593581331,0.517400738954,0.524167387926,
	0.530893738124,0.537579998442,0.544226376797,0.550833080135,0.557400314430,
	0.563928284690,0.570417194958,0.576867248321,0.583278646905,0.589651591884,
	0.595986283483,0.602282920981,0.608541702710,0.614762826067,0.620946487510,
	0.627092882562,0.633202205821,0.639274650955,0.645310410710,0.651309676912,
	0.657272640472,0.663199491388,0.669090418747,0.674945610732,0.680765254622,
	0.686549536798,0.692298642744,0.698012757051,0.703692063424,0.709336744679,
	0.714946982751,0.720522958696,0.726064852696,0.731572844058,0.737047111222,
	0.742487831763,0.747895182393,0.753269338966,0.758610476481,0.763918769084,
	0.769194390075,0.774437511905,0.779648306187,0.784826943694,0.789973594365,
	0.795088427304,0.800171610791,0.805223312279,0.810243698399,0.815232934965,
	0.820191186975,0.825118618615,0.830015393264,0.834881673495,0.839717621081,
	0.844523396994,0.849299161413,0.854045073724,0.858761292525,0.863447975630,
	0.868105280069,0.872733362095,0.877332377185,0.881902480043,0.886443824607,
	0.890956564046,0.895440850770,0.899896836426,0.904324671909,0.908724507360,
	0.913096492169,0.917440774981,0.921757503700,0.926046825487,0.930308886768,
	0.934543833236,0.938751809852,0.942932960852,0.947087429747,0.951215359327,
	0.955316891666,0.959392168121,0.963441329340,0.967464515262,0.971461865120,
	0.975433517446,0.979379610074,0.983300280140,0.987195664088,0.991065897675,
	0.994911115967,0.998731453351,1.002527043529,1.006298019530,1.010044513705,
	1.013766657737,1.017464582637,1.021138418754,1.024788295773,1.028414342720,
	1.032016687965,1.035595459224,1.039150783562,1.042682787398,1.046191596507,
	1.049677336021,1.053140130432,1.056580103600,1.059997378750,1.063392078477,
	1.066764324749,1.070114238910,1.073441941685,1.076747553176,1.080031192873,
	1.083292979653,1.086533031782,1.089751466920,1.092948402121,1.096123953841,
	1.099278237934,1.102411369659,1.105523463684,1.108614634085,1.111684994349,
	1.114734657383,1.117763735507,1.120772340464,1.123760583421,1.126728574970,
	1.129676425133,1.132604243362,1.135512138545,1.138400219006,1.141268592509,
	1.144117366260,1.146946646909,1.149756540556,1.152547152748,1.155318588488,
	1.158070952233,1.160804347897,1.163518878856,1.166214647948,1.168891757479,
	1.171550309221,1.174190404417,1.176812143784,1.179415627516,1.182000955284,
	1.184568226241,1.187117539021,1.189648991748,1.192162682030,1.194658706971,
	1.197137163163,1.199598146698,1.202041753165,1.204468077652,1.206877214752,
	1.209269258564,1.211644302693,1.214002440256,1.216343763883,1.218668365601,
	1.220976337307,1.223267770063,1.225542754575,1.227801381071,1.230043739306,
	1.232269918565,1.234480007663,1.236674094952,1.238852268316,1.241014615181,
	1.243161222511,1.245292176815,1.247407564145,1.249507470103,1.251591979839,
	1.253661178054,1.255715149006,1.257753976506,1.259777743927,1.261786534199,
	1.263780429819,1.265759512845,1.267723864904,1.269673567194,1.271608700482,
	1.273529345110,1.275435580995,1.277327487633,1.279205144098,1.281068629049,
	1.282918020726,1.284753396959,1.286574835163,1.288382412344,1.290176205102,
	1.291956289630,1.293722741720,1.295475636758,1.297215049736,1.298941055244,
	1.300653727479,1.302353140244,1.304039366951,1.305712480623,1.307372553893,
	1.309019659011,1.310653867842,1.312275251871,1.313883882202,1.315479829561,
	1.317063164298,1.318633956390,1.320192275442,1.321738190687,1.323271770993,
	1.324793084857,1.326302200415,1.327799185440,1.329284107342,1.330757033173,
	1.332218029628,1.333667163048,1.335104499417,1.336530104371,1.337944043193,
	1.339346380818,1.340737181838,1.342116510496,1.343484430694,1.344841005993,
	1.346186299614,1.347520374442,1.348843293023,1.350155117572,1.351455909970,
	1.352745731766,1.354024644181,1.355292708111,1.356549984122,1.357796532459,
	1.359032413043,1.360257685475,1.361472409037,1.362676642693,1.363870445091,
	1.365053874567,1.366226989142,1.367389846526,1.368542504122,1.369685019023,
	1.370817448017,1.371939847587,1.373052273913,1.374154782873,1.375247430048,
	1.376330270716,1.377403359863,1.378466752176,1.379520502050,1.380564663588,
	1.381599290602,1.382624436614,1.383640154861,1.384646498291,1.385643519568,
	1.386631271073,1.387609804907,1.388579172887,1.389539426555,1.390490617174,
	1.391432795730,1.392366012936,1.393290319233,1.394205764788,1.395112399498,
	1.396010272994,1.396899434636,1.397779933520,1.398651818478,1.399515138077,
	1.400369940624,1.401216274163,1.402054186481,1.402883725107,1.403704937314,
	1.404517870118,1.405322570283,1.406119084320,1.406907458489,1.407687738800,
	1.408459971015,1.409224200649,1.409980472970,1.410728833003,1.411469325529,
	1.412201995087,1.412926885974,1.413644042250,1.414353507735,1.415055326013,
	1.415749540432,1.416436194104,1.417115329911,1.417786990501,1.418451218290,
	1.419108055467,1.419757543991,1.420399725594,1.421034641784,1.421662333841,
	1.422282842823,1.422896209566,1.423502474685,1.424101678573,1.424693861407,
	1.425279063143,1.425857323523,1.426428682073,1.426993178104,1.427550850714,
	1.428101738789,1.428645881005,1.429183315826,1.429714081510,1.430238216105,
	1.430755757454,1.431266743195,1.431771210760,1.432269197379,1.432760740078,
	1.433245875686,1.433724640828,1.434197071931,1.434663205226,1.435123076744,
	1.435576722324,1.436024177606,1.436465478039,1.436900658879,1.437329755191,
	1.437752801847,1.438169833531,1.438580884739,1.438985989777,1.439385182767,
	1.439778497644,1.440165968158,1.440547627877,1.440923510184,1.441293648282,
	1.441658075193,1.442016823758,1.442369926641,1.442717416328,1.443059325126,
	1.443395685167,1.443726528409,1.444051886636,1.444371791457,1.444686274310,
	1.444995366461,1.445299099006,1.445597502872,1.445890608817,1.446178447431,
	1.446461049136,1.446738444192,1.447010662689,1.447277734556,1.447539689559,
	1.447796557299,1.448048367219,1.448295148597,1.448536930555,1.448773742054,
	1.449005611899,1.449232568734,1.449454641051,1.449671857182,1.449884245309,
	1.450091833456,1.450294649495,1.450492721149,1.450686075984,1.450874741419,
	1.451058744723,1.451238113016,1.451412873267,1.451583052301,1.451748676795,
	1.451909773279,1.452066368141,1.452218487622,1.452366157820,1.452509404691,
	1.452648254049,1.452782731565,1.452912862771,1.453038673061,1.453160187687,
	1.453277431764,1.453390430270,1.453499208046,1.453603789796,1.453704200091,
	1.453800463365,1.453892603920,1.453980645923,1.454064613412,1.454144530289,
	1.454220420329,1.454292307173,1.454360214337,1.454424165204,1.454484183031,
	1.454540290946,1.454592511953,1.454640868927,1.454685384620,1.454726081656,
	1.454762982539,1.454796109647,1.454825485235,1.454851131438,1.454873070267,
	1.454891323616,1.454905913254,1.454916860834,1.454924187891,1.454927915837,
	1.454928065973,1.454924659477,1.454917717415,1.454907260736,1.454893310272,
	1.454875886745,1.454855010759,1.454830702807,1.454802983269,1.454771872413,
	1.454737390396,1.454699557264,1.454658392953,1.454613917289,1.454566149990,
	1.454515110664,1.454460818813,1.454403293832,1.454342555007,1.454278621520,
	1.454211512448,1.454141246761,1.454067843327,1.453991320908,1.453911698165,
	1.453828993654,1.453743225832,1.453654413051,1.453562573565,1.453467725526,
	1.453369886987,1.453269075900,1.453165310120,1.453058607403,1.452948985407,
	1.452836461695,1.452721053729,1.452602778879,1.452481654417,1.452357697520,
	1.452230925273,1.452101354664,1.451969002587,1.451833885847,1.451696021151,
	1.451555425119,1.451412114276,1.451266105057,1.451117413807,1.450966056780,
	1.450812050142,1.450655409968,1.450496152245,1.450334292872,1.450169847661,
	1.450002832337,1.449833262535,1.449661153809,1.449486521623,1.449309381358,
	1.449129748309,1.448947637687,1.448763064620,1.448576044150,1.448386591239,
	1.448194720765,1.448000447524,1.447803786231,1.447604751517,1.447403357937,
	1.447199619961,1.446993551983,1.446785168314,1.446574483189,1.446361510762,
	1.446146265111,1.445928760235,1.445709010055,1.445487028417,1.445262829088,
	1.445036425762,1.444807832055,1.444577061509,1.444344127591,1.444109043692,
	1.443871823131,1.443632479153,1.443391024928,1.443147473557,1.442901838064,
	1.442654131404,1.442404366460,1.442152556043,1.441898712893,1.441642849681,
	1.441384979006,1.441125113399,1.440863265320,1.440599447162,1.440333671247,
	1.440065949832,1.439796295103,1.439524719180,1.439251234116,1.438975851898,
	1.438698584446,1.438419443612,1.438138441185,1.437855588888,1.437570898380,
	1.437284381252,1.436996049036,1.436705913195,1.436413985132,1.436120276186,
	1.435824797633,1.435527560685,1.435228576494,1.434927856149,1.434625410679,
	1.434321251050,1.434015388169,1.433707832881,1.433398595971,1.433087688166,
	1.432775120131,1.432460902473,1.432145045742,1.431827560425,1.431508456956,
	1.431187745708,1.430865436997,1.430541541081,1.430216068163,1.429889028389,
	1.429560431847,1.429230288570,1.428898608536,1.428565401667,1.428230677829,
	1.427894446836,1.427556718444,1.427217502357,1.426876808224,1.426534645643,
	1.426191024154,1.425845953249,1.425499442364,1.425151500883,1.424802138139,
	1.424451363413,1.424099185934,1.423745614878,1.423390659374,1.423034328496,
	1.422676631271,1.422317576674,1.421957173629,1.421595431014,1.421232357654,
	1.420867962326,1.420502253760,1.420135240634,1.419766931582,1.419397335186,
	1.419026459982,1.418654314459,1.418280907058,1.417906246173,1.417530340152,
	1.417153197295,1.416774825857,1.416395234048,1.416014430029,1.415632421920,
	1.415249217791,1.414864825672,1.414479253544,1.414092509346,1.413704600972,
	1.413315536272,1.412925323052,1.412533969075,1.412141482061,1.411747869686,
	1.411353139585,1.410957299347,1.410560356523,1.410162318618,1.409763193099,
	1.409362987387,1.408961708866,1.408559364875,1.408155962715,1.407751509644,
	1.407346012881,1.406939479605,1.406531916953,1.406123332023,1.405713731875,
	1.405303123528,1.404891513962,1.404478910118,1.404065318898,1.403650747167,
	1.403235201749,1.402818689433,1.402401216967,1.401982791064,1.401563418397,
	1.401143105604,1.400721859285,1.400299686002,1.399876592281,1.399452584613,
	1.399027669451,1.398601853213,1.398175142279,1.397747542997,1.397319061675,
	1.396889704590,1.396459477981,1.396028388053,1.395596440977,1.395163642888,
	1.394729999888,1.394295518043,1.393860203389,1.393424061923,1.392987099612,
	1.392549322388,1.392110736151,1.391671346767,1.391231160069,1.390790181858,
	1.390348417903,1.389905873939,1.389462555669,1.389018468767,1.388573618871,
	1.388128011590,1.387681652501,1.387234547149,1.386786701050,1.386338119686,
	1.385888808511,1.385438772947,1.384988018386,1.384536550189,1.384084373687,
	1.383631494183,1.383177916948,1.382723647224,1.382268690224,1.381813051132,
	1.381356735101,1.380899747258,1.380442092699,1.379983776492,1.379524803676,
	1.379065179263,1.378604908236,1.378143995550,1.377682446131,1.377220264880,
	1.376757456668,1.376294026340,1.375829978713,1.375365318577,1.374900050696,
	1.374434179806,1.373967710616,1.373500647810,1.373032996045,1.372564759951,
	1.372095944133,1.371626553170,1.371156591615,1.370686063994,1.370214974810,
	1.369743328539,1.369271129632,1.368798382515,1.368325091589,1.367851261230,
	1.367376895791,1.366901999598,1.366426576954,1.365950632137,1.365474169401,
	1.364997192977,1.364519707072,1.364041715867,1.363563223523,1.363084234174,
	1.362604751932,1.362124780887,1.361644325105,1.361163388628,1.360681975477,
	1.360200089649,1.359717735119,1.359234915839,1.358751635739,1.358267898727,
	1.357783708688,1.357299069487,1.356813984964,1.356328458941,1.355842495216,
	1.355356097565,1.354869269745,1.354382015489,1.353894338511,1.353406242503,
	1.352917731137,1.352428808062,1.351939476910,1.351449741288,1.350959604785,
	1.350469070971,1.349978143393,1.349486825580,1.348995121040,1.348503033260,
	1.348010565709,1.347517721836,1.347024505070,1.346530918822,1.346036966480,
	1.345542651416,1.345047976983,1.344552946513,1.344057563320,1.343561830700,
	1.343065751928,1.342569330263,1.342072568944,1.341575471191,1.341078040208,
	1.340580279179,1.340082191270,1.339583779629,1.339085047386,1.338585997655,
	1.338086633530,1.337586958087,1.337086974387,1.336586685473,1.336086094368,
	1.335585204081,1.335084017601,1.334582537903,1.334080767944,1.333578710662,
	1.333076368980,1.332573745806,1.332070844028,1.331567666519,1.331064216138,
	1.330560495723,1.330056508099,1.329552256074,1.329047742441,1.328542969976,
	1.328037941438,1.327532659572,1.327027127108,1.326521346757,1.326015321219,
	1.325509053175,1.325002545292,1.324495800221,1.323988820600,1.323481609050,
	1.322974168176,1.322466500571,1.321958608811,1.321450495458,1.320942163059,
	1.320433614146,1.319924851238,1.319415876838,1.318906693436,1.318397303506,
	1.317887709509,1.317377913892,1.316867919088,1.316357727514,1.315847341576,
	1.315336763665,1.314825996157,1.314315041417,1.313803901794,1.313292579625,
	1.312781077232,1.312269396926,1.311757541002,1.311245511744,1.310733311422,
	1.310220942292,1.309708406598,1.309195706572,1.308682844432,1.308169822382,
	1.307656642616,1.307143307314,1.306629818642,1.306116178756,1.305602389798,
	1.305088453899,1.304574373175,1.304060149733,1.303545785667,1.303031283056,
	1.302516643972,1.302001870470,1.301486964597,1.300971928385,1.300456763858,
	1.299941473024,1.299426057883,1.298910520421,1.298394862614,1.297879086425,
	1.297363193807,1.296847186702,1.296331067040,1.295814836739,1.295298497707,
	1.294782051840,1.294265501025,1.293748847135,1.293232092035,1.292715237578,
	1.292198285605,1.291681237949,1.291164096430,1.290646862857,1.290129539032,
	1.289612126743,1.289094627768,1.288577043877,1.288059376828,1.287541628367,
	1.287023800234,1.286505894156,1.285987911850,1.285469855023,1.284951725374,
	1.284433524589,1.283915254347,1.283396916315,1.282878512153,1.282360043507,
	1.281841512017,1.281322919313,1.280804267014,1.280285556730,1.279766790063,
	1.279247968604,1.278729093934,1.278210167627,1.277691191247,1.277172166348,
	1.276653094475,1.276133977165,1.275614815945,1.275095612333,1.274576367839,
	1.274057083963,1.273537762197,1.273018404024,1.272499010918,1.271979584345,
	1.271460125762,1.270940636617,1.270421118349,1.269901572391,1.269382000164,
	1.268862403084,1.268342782557,1.267823139981,1.267303476744,1.266783794230,
	1.266264093810,1.265744376849,1.265224644706,1.264704898729,1.264185140260,
	1.263665370630,1.263145591166,1.262625803184,1.262106007995,1.261586206900,
	1.261066401193,1.260546592161,1.260026781082,1.259506969228,1.258987157862,
	1.258467348241,1.257947541612,1.257427739218,1.256907942291,1.256388152059,
	1.255868369741,1.255348596548,1.254828833686,1.254309082351,1.253789343735,
	1.253269619020,1.252749909383,1.252230215993,1.251710540011,1.251190882595,
	1.250671244890,1.250151628040,1.249632033179,1.249112461435,1.248592913928,
	1.248073391773,1.247553896078,1.247034427943,1.246514988464,1.245995578729,
	1.245476199817,1.244956852805,1.244437538760,1.243918258745,1.243399013815,
	1.242879805019,1.242360633401,1.241841499996,1.241322405835,1.240803351942,
	1.240284339336,1.239765369027,1.239246442022,1.238727559320,1.238208721914,
	1.237689930793,1.237171186938,1.236652491324,1.236133844921,1.235615248692,
	1.235096703597,1.234578210586,1.234059770607,1.233541384600,1.233023053500,
	1.232504778235,1.231986559730,1.231468398903,1.230950296665,1.230432253925,
	1.229914271582,1.229396350532,1.228878491666,1.228360695869,1.227842964020,
	1.227325296994,1.226807695658,1.226290160876,1.225772693506,1.225255294402,
	1.224737964410,1.224220704373,1.223703515129,1.223186397509,1.222669352340,
	1.222152380444,1.221635482638,1.221118659734,1.220601912538,1.220085241852,
	1.219568648474,1.219052133194,1.218535696800,1.218019340075,1.217503063795,
	1.216986868733,1.216470755656,1.215954725328,1.215438778507,1.214922915947,
	1.214407138395,1.213891446597,1.213375841292,1.212860323214,1.212344893095,
	1.211829551660,1.211314299631,1.210799137723,1.210284066650,1.209769087119,
	1.209254199834,1.208739405494,1.208224704793,1.207710098422,1.207195587066,
	1.206681171408,1.206166852125,1.205652629889,1.205138505371,1.204624479233,
	1.204110552138,1.203596724741,1.203082997695,1.202569371647,1.202055847242,
	1.201542425119,1.201029105914,1.200515890259,1.200002778783,1.199489772108,
	1.198976870855,1.198464075640,1.197951387074,1.197438805766,1.196926332321,
	1.196413967337,1.195901711413,1.195389565141,1.194877529110,1.194365603904,
	1.193853790107,1.193342088294,1.192830499041,1.192319022918,1.191807660492,
	1.191296412324,1.190785278976,1.190274261003,1.189763358956,1.189252573386,
	1.188741904837,1.188231353850,1.187720920964,1.187210606713,1.186700411629,
	1.186190336239,1.185680381068,1.185170546636,1.184660833462,1.184151242059,
	1.183641772938,1.183132426606,1.182623203568,1.182114104325,1.181605129374,
	1.181096279210,1.180587554324,1.180078955203,1.179570482332,1.179062136193,
	1.178553917265,1.178045826021,1.177537862935,1.177030028475,1.176522323107,
	1.176014747295,1.175507301497,1.174999986170,1.174492801768,1.173985748742,
	1.173478827538,1.172972038603,1.172465382377,1.171958859299,1.171452469805,
	1.170946214328,1.170440093298,1.169934107143,1.169428256285,1.168922541147,
	1.168416962148,1.167911519702,1.167406214224,1.166901046123,1.166396015806,
	1.165891123679,1.165386370143,1.164881755598,1.164377280439,1.163872945061,
	1.163368749855,1.162864695209,1.162360781510,1.161857009139,1.161353378479,
	1.160849889906,1.160346543797,1.159843340524,1.159340280456,1.158837363963,
	1.158334591409,1.157831963157,1.157329479566,1.156827140996,1.156324947799,
	1.155822900330,1.155320998939,1.154819243974,1.154317635779,1.153816174699,
	1.153314861073,1.152813695239,1.152312677535,1.151811808293,1.151311087844,
	1.150810516517,1.150310094639,1.149809822534,1.149309700524,1.148809728929,
	1.148309908066,1.147810238250,1.147310719794,1.146811353009,1.146312138203,
	1.145813075683,1.145314165753,1.144815408714,1.144316804866,1.143818354508,
	1.143320057934,1.142821915438,1.142323927311,1.141826093842,1.141328415319,
	1.140830892026,1.140333524245,1.139836312259,1.139339256345,1.138842356781,
	1.138345613841,1.137849027798,1.137352598923,1.136856327484,1.136360213748,
	1.135864257981,1.135368460444,1.134872821398,1.134377341104,1.133882019817,
	1.133386857793,1.132891855285,1.132397012545,1.131902329821,1.131407807362,
	1.130913445413,1.130419244219,1.129925204020,1.129431325058,1.128937607571,
	1.128444051795,1.127950657966,1.127457426315,1.126964357076,1.126471450476,
	1.125978706744,1.125486126106,1.124993708786,1.124501455006,1.124009364988,
	1.123517438949,1.123025677109,1.122534079682,1.122042646883,1.121551378924,
	1.121060276015,1.120569338366,1.120078566184,1.119587959675,1.119097519042,
	1.118607244490,1.118117136218,1.117627194425,1.117137419311,1.116647811070,
	1.116158369897,1.115669095986,1.115179989528,1.114691050713,1.114202279729,
	1.113713676764,1.113225242002,1.112736975627,1.112248877823,1.111760948769,
	1.111273188646,1.110785597631,1.110298175900,1.109810923629,1.109323840991,
	1.108836928159,1.108350185303,1.107863612592,1.107377210194,1.106890978276,
	1.106404917003,1.105919026537,1.105433307043,1.104947758680,1.104462381608,
	1.103977175985,1.103492141968,1.103007279713,1.102522589373,1.102038071102,
	1.101553725050,1.101069551369,1.100585550206,1.100101721710,1.099618066026,
	1.099134583300,1.098651273675,1.098168137295,1.097685174299,1.097202384827,
	1.096719769020,1.096237327013,1.095755058943,1.095272964946,1.094791045153,
	1.094309299700,1.093827728715,1.093346332330,1.092865110674,1.092384063874,
	1.091903192057,1.091422495348,1.090941973871,1.090461627750,1.089981457105,
	1.089501462059,1.089021642730,1.088541999238,1.088062531699,1.087583240229,
	1.087104124944,1.086625185957,1.086146423382,1.085667837331,1.085189427913,
	1.084711195239,1.084233139417,1.083755260555,1.083277558759,1.082800034134,
	1.082322686784,1.081845516814,1.081368524325,1.080891709417,1.080415072193,
	1.079938612749,1.079462331186,1.078986227598,1.078510302084,1.078034554737,
	1.077558985652,1.077083594923,1.076608382640,1.076133348895,1.075658493779,
	1.075183817380,1.074709319787,1.074235001087,1.073760861366,1.073286900711,
	1.072813119204,1.072339516930,1.071866093971,1.071392850409,1.070919786325,
	1.070446901798,1.069974196907,1.069501671731,1.069029326347,1.068557160830,
	1.068085175256,1.067613369700,1.067141744235,1.066670298934,1.066199033868,
	1.065727949109,1.065257044727,1.064786320791,1.064315777369,1.063845414529,
	1.063375232338,1.062905230862,1.062435410166,1.061965770313,1.061496311368,
	1.061027033394,1.060557936451,1.060089020601,1.059620285904,1.059151732420,
	1.058683360208,1.058215169324,1.057747159827,1.057279331772,1.056811685215,
	1.056344220210,1.055876936813,1.055409835075,1.054942915050,1.054476176789,
	1.054009620343,1.053543245763,1.053077053097,1.052611042395,1.052145213705,
	1.051679567073,1.051214102548,1.050748820174,1.050283719996,1.049818802060,
	1.049354066408,1.048889513084,1.048425142131,1.047960953589,1.047496947501,
	1.047033123906,1.046569482843,1.046106024352,1.045642748472,1.045179655239,
	1.044716744691,1.044254016863,1.043791471792,1.043329109513,1.042866930059,
	1.042404933465,1.041943119763,1.041481488986,1.041020041166,1.040558776334,
	1.040097694520,1.039636795754,1.039176080065,1.038715547483,1.038255198035,
	1.037795031748,1.037335048650,1.036875248767,1.036415632123,1.035956198745,
	1.035496948657,1.035037881882,1.034578998445,1.034120298366,1.033661781670,
	1.033203448376,1.032745298507,1.032287332083,1.031829549122,1.031371949646,
	1.030914533672,1.030457301218,1.030000252303,1.029543386942,1.029086705154,
	1.028630206954,1.028173892356,1.027717761377,1.027261814030,1.026806050330,
	1.026350470289,1.025895073921,1.025439861238,1.024984832251,1.024529986972,
	1.024075325411,1.023620847579,1.023166553486,1.022712443140,1.022258516551,
	1.021804773727,1.021351214675,1.020897839403,1.020444647918,1.019991640225,
	1.019538816331,1.019086176240,1.018633719959,1.018181447491,1.017729358839,
	1.017277454009,1.016825733002,1.016374195821,1.015922842468,1.015471672944,
	1.015020687252,1.014569885391,1.014119267362,1.013668833165,1.013218582798,
	1.012768516262,1.012318633554,1.011868934673,1.011419419615,1.010970088379,
	1.010520940961,1.010071977358,1.009623197565,1.009174601577,1.008726189391,
	1.008277961000,1.007829916399,1.007382055582,1.006934378543,1.006486885273,
	1.006039575766,1.005592450015,1.005145508010,1.004698749744,1.004252175207,
	1.003805784390,1.003359577284,1.002913553878,1.002467714162,1.002022058125,
	1.001576585756,1.001131297042,1.000686191973,1.000241270536,0.999796532717,
	0.999351978504,0.998907607884,0.998463420842,0.998019417365,0.997575597438,
	0.997131961045,0.996688508172,0.996245238803,0.995802152922,0.995359250513,
	0.994916531558,0.994473996042,0.994031643947,0.993589475255,0.993147489947,
	0.992705688007,0.992264069414,0.991822634150,0.991381382196,0.990940313532,
	0.990499428138,0.990058725993,0.989618207078,0.989177871370,0.988737718849,
	0.988297749493,0.987857963280,0.987418360188,0.986978940195,0.986539703277,
	0.986100649412,0.985661778576,0.985223090744,0.984784585894,0.984346264001,
	0.983908125040,0.983470168987,0.983032395815,0.982594805500,0.982157398015,
	0.981720173335,0.981283131433,0.980846272282,0.980409595856,0.979973102127,
	0.979536791069,0.979100662651,0.978664716848,0.978228953631,0.977793372970,
	0.977357974837,0.976922759204,0.976487726039,0.976052875315,0.975618207000,
	0.975183721065,0.974749417479,0.974315296211,0.973881357231,0.973447600507,
	0.973014026008,0.972580633701,0.972147423556,0.971714395539,0.971281549618,
	0.970848885760,0.970416403934,0.969984104104,0.969551986238,0.969120050302,
	0.968688296262,0.968256724083,0.967825333733,0.967394125175,0.966963098374,
	0.966532253297,0.966101589907,0.965671108169,0.965240808046,0.964810689504,
	0.964380752505,0.963950997014,0.963521422993,0.963092030405,0.962662819214,
	0.962233789382,0.961804940872,0.961376273645,0.960947787664,0.960519482891,
	0.960091359287,0.959663416813,0.959235655431,0.958808075101,0.958380675784,
	0.957953457442,0.957526420034,0.957099563520,0.956672887860,0.956246393014,
	0.955820078942,0.955393945603,0.954967992956,0.954542220960,0.954116629574,
	0.953691218757,0.953265988466,0.952840938660,0.952416069297,0.951991380335,
	0.951566871732,0.951142543445,0.950718395431,0.950294427647,0.949870640050,
	0.949447032598,0.949023605246,0.948600357951,0.948177290669,0.947754403357,
	0.947331695969,0.946909168463,0.946486820792,0.946064652914,0.945642664782,
	0.945220856352,0.944799227579,0.944377778417,0.943956508821,0.943535418745,
	0.943114508144,0.942693776971,0.942273225181,0.941852852726,0.941432659562,
	0.941012645640,0.940592810915,0.940173155339,0.939753678865,0.939334381447,
	0.938915263036,0.938496323585,0.938077563048,0.937658981374,0.937240578518,
	0.936822354430,0.936404309063,0.935986442368,0.935568754296,0.935151244799,
	0.934733913828,0.934316761334,0.933899787268,0.933482991580,0.933066374222,
	0.932649935144,0.932233674295,0.931817591627,0.931401687090,0.930985960632,
	0.930570412205,0.930155041758,0.929739849240,0.929324834600,0.928909997789,
	0.928495338755,0.928080857448,0.927666553815,0.927252427807,0.926838479371,
	0.926424708456,0.926011115011,0.925597698983,0.925184460322,0.924771398975,
	0.924358514890,0.923945808014,0.923533278297,0.923120925684,0.922708750124,
	0.922296751563,0.921884929950,0.921473285231,0.921061817354,0.920650526264,
	0.920239411910,0.919828474237,0.919417713192,0.919007128722,0.918596720773,
	0.918186489292,0.917776434223,0.917366555514,0.916956853111,0.916547326958,
	0.916137977003,0.915728803189,0.915319805464,0.914910983772,0.914502338059,
	0.914093868270,0.913685574350,0.913277456244,0.912869513897,0.912461747254,
	0.912054156259,0.911646740858,0.911239500994,0.910832436612,0.910425547656,
	0.910018834072,0.909612295802,0.909205932791,0.908799744983,0.908393732322,
	0.907987894751,0.907582232215,0.907176744657,0.906771432020,0.906366294248,
	0.905961331284,0.905556543072,0.905151929555,0.904747490675,0.904343226377,
	0.903939136602,0.903535221294,0.903131480396,0.902727913849,0.902324521598,
	0.901921303584,0.901518259749,0.901115390037,0.900712694389,0.900310172748,
	0.899907825056,0.899505651255,0.899103651286,0.898701825093,0.898300172616,
	0.897898693798,0.897497388580,0.897096256903,0.896695298710,0.896294513942,
	0.895893902540,0.895493464446,0.895093199601,0.894693107945,0.894293189421,
	0.893893443970,0.893493871531,0.893094472047,0.892695245458,0.892296191704,
	0.891897310728,0.891498602468,0.891100066867,0.890701703864,0.890303513400,
	0.889905495415,0.889507649850,0.889109976645,0.888712475741,0.888315147076,
	0.887917990593,0.887521006230,0.887124193927,0.886727553625,0.886331085263,
	0.885934788781,0.885538664120,0.885142711218,0.884746930015,0.884351320451,
	0.883955882466,0.883560615999,0.883165520989,0.882770597375,0.882375845098,
	0.881981264096,0.881586854309,0.881192615675,0.880798548134,0.880404651625,
	0.880010926087,0.879617371458,0.879223987679,0.878830774687,0.878437732421,
	0.878044860820,0.877652159824,0.877259629370,0.876867269397,0.876475079844,
	0.876083060649,0.875691211750,0.875299533087,0.874908024598,0.874516686220,
	0.874125517893,0.873734519554,0.873343691142,0.872953032595,0.872562543851,
	0.872172224847,0.871782075523,0.871392095816,0.871002285664,0.870612645006,
	0.870223173778,0.869833871918,0.869444739365,0.869055776057,0.868666981930,
	0.868278356924,0.867889900974,0.867501614020,0.867113495998,0.866725546846,
	0.866337766502,0.865950154902,0.865562711985,0.865175437688,0.864788331949,
	0.864401394703,0.864014625890,0.863628025445,0.863241593307,0.862855329412,
	0.862469233698,0.862083306102,0.861697546561,0.861311955011,0.860926531391,
	0.860541275636,0.860156187684,0.859771267472,0.859386514937,0.859001930015,
	0.858617512644,0.858233262760,0.857849180300,0.857465265201,0.857081517400,
	0.856697936832,0.856314523436,0.855931277147,0.855548197902,0.855165285639,
	0.854782540292,0.854399961799,0.854017550097,0.853635305122,0.853253226810,
	0.852871315097,0.852489569921,0.852107991218,0.851726578923,0.851345332974,
	0.850964253307,0.850583339857,0.850202592561,0.849822011357,0.849441596178,
	0.849061346963,0.848681263647,0.848301346165,0.847921594456,0.847542008454,
	0.847162588095,0.846783333316,0.846404244053,0.846025320242,0.845646561819,
	0.845267968719,0.844889540879,0.844511278235,0.844133180723,0.843755248279,
	0.843377480838,0.842999878336,0.842622440710,0.842245167895,0.841868059828,
	0.841491116443,0.841114337676,0.840737723465,0.840361273743,0.839984988448,
	0.839608867514,0.839232910878,0.838857118476,0.838481490242,0.838106026113,
	0.837730726024,0.837355589911,0.836980617710,0.836605809356,0.836231164785,
	0.835856683933,0.835482366735,0.835108213126,0.834734223043,0.834360396420,
	0.833986733194,0.833613233300,0.833239896673,0.832866723249,0.832493712964,
	0.832120865752,0.831748181550,0.831375660293,0.831003301917,0.830631106356,
	0.830259073546,0.829887203424,0.829515495923,0.829143950980,0.828772568530,
	0.828401348508,0.828030290850,0.827659395491,0.827288662367,0.826918091413,
	0.826547682563,0.826177435755,0.825807350922,0.825437428001,0.825067666926,
	0.824698067633,0.824328630058,0.823959354135,0.823590239800,0.823221286988,
	0.822852495635,0.822483865675,0.822115397045,0.821747089678,0.821378943512,
	0.821010958480,0.820643134519,0.820275471563,0.819907969547,0.819540628408,
	0.819173448080,0.818806428498,0.818439569598,0.818072871314,0.817706333583,
	0.817339956340,0.816973739519,0.816607683055,0.816241786885,0.815876050943,
	0.815510475165,0.815145059486,0.814779803840,0.814414708164,0.814049772392,
	0.813684996460,0.813320380302,0.812955923855,0.812591627053,0.812227489831,
	0.811863512126,0.811499693871,0.811136035002,0.810772535454,0.810409195163,
	0.810046014064,0.809682992092,0.809320129182,0.808957425270,0.808594880290,
	0.808232494178,0.807870266869,0.807508198298,0.807146288401,0.806784537113,
	0.806422944368,0.806061510103,0.805700234252,0.805339116751,0.804978157535,
	0.804617356539,0.804256713698,0.803896228948,0.803535902224,0.803175733461,
	0.802815722594,0.802455869559,0.802096174291,0.801736636725,0.801377256796,
	0.801018034441,0.800658969593,0.800300062188,0.799941312162,0.799582719450,
	0.799224283987,0.798866005708,0.798507884549,0.798149920445,0.797792113332,
	0.797434463144,0.797076969817,0.796719633287,0.796362453488,0.796005430356,
	0.795648563826,0.795291853835,0.794935300316,0.794578903206,0.794222662439,
	0.793866577952,0.793510649679,0.793154877557
	}
};

double always_inline s05_stage4_negclip(double x) {
    double f = fabs(x);
    f = f * s05_stage4_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s05_stage4_neg_table.data[0];
    } else if (i >= s05_stage4_neg_table.size-1) {
        f = s05_stage4_neg_table.data[s05_stage4_neg_table.size-1];
    } else {
        f -= i;
        f = s05_stage4_neg_table.data[i]*(1-f) + s05_stage4_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}


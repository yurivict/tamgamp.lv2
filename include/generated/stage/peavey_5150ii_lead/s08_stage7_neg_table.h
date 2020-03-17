
// s08_stage7_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  4.778583
 // --table_op  1.000000

struct tables08_stage7_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables08_stage7_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables08_stage7_neg&() const { return *(tables08_stage7_neg*)this; }
};

static tables08_stage7_neg_imp<2048> s08_stage7_neg_table __rt_data = {
	0,-0.832218,204.7,2048, {
	0.000000000000,-0.000997799323,-0.001994644627,-0.002990536713,-0.003985476382,
	-0.004979464434,-0.005972501670,-0.006964588888,-0.007955726889,-0.008945916469,
	-0.009935158425,-0.010923453556,-0.011910802656,-0.012897206520,-0.013882665945,
	-0.014867181723,-0.015850754648,-0.016833385513,-0.017815075110,-0.018795824230,
	-0.019775633664,-0.020754504202,-0.021732436634,-0.022709431749,-0.023685490334,
	-0.024660613177,-0.025634801065,-0.026608054784,-0.027580375120,-0.028551762857,
	-0.029522218781,-0.030491743674,-0.031460338319,-0.032428003499,-0.033394739995,
	-0.034360548589,-0.035325430061,-0.036289385190,-0.037252414756,-0.038214519536,
	-0.039175700310,-0.040135957853,-0.041095292944,-0.042053706356,-0.043011198866,
	-0.043967771248,-0.044923424276,-0.045878158724,-0.046831975364,-0.047784874968,
	-0.048736858307,-0.049687926153,-0.050638079275,-0.051587318443,-0.052535644426,
	-0.053483057991,-0.054429559907,-0.055375150940,-0.056319831857,-0.057263603424,
	-0.058206466404,-0.059148421564,-0.060089469666,-0.061029611474,-0.061968847750,
	-0.062907179257,-0.063844606754,-0.064781131004,-0.065716752765,-0.066651472798,
	-0.067585291861,-0.068518210712,-0.069450230109,-0.070381350808,-0.071311573566,
	-0.072240899138,-0.073169328279,-0.074096861745,-0.075023500287,-0.075949244660,
	-0.076874095616,-0.077798053907,-0.078721120284,-0.079643295498,-0.080564580298,
	-0.081484975435,-0.082404481656,-0.083323099711,-0.084240830345,-0.085157674308,
	-0.086073632344,-0.086988705199,-0.087902893619,-0.088816198347,-0.089728620128,
	-0.090640159705,-0.091550817821,-0.092460595217,-0.093369492635,-0.094277510815,
	-0.095184650498,-0.096090912424,-0.096996297330,-0.097900805956,-0.098804439040,
	-0.099707197317,-0.100609081525,-0.101510092400,-0.102410230676,-0.103309497089,
	-0.104207892373,-0.105105417260,-0.106002072485,-0.106897858778,-0.107792776872,
	-0.108686827497,-0.109580011385,-0.110472329265,-0.111363781865,-0.112254369915,
	-0.113144094143,-0.114032955276,-0.114920954041,-0.115808091164,-0.116694367371,
	-0.117579783386,-0.118464339934,-0.119348037739,-0.120230877524,-0.121112860011,
	-0.121993985923,-0.122874255982,-0.123753670907,-0.124632231419,-0.125509938237,
	-0.126386792082,-0.127262793670,-0.128137943720,-0.129012242950,-0.129885692075,
	-0.130758291812,-0.131630042877,-0.132500945983,-0.133371001846,-0.134240211179,
	-0.135108574696,-0.135976093108,-0.136842767128,-0.137708597467,-0.138573584835,
	-0.139437729944,-0.140301033501,-0.141163496218,-0.142025118801,-0.142885901959,
	-0.143745846398,-0.144604952827,-0.145463221949,-0.146320654472,-0.147177251100,
	-0.148033012536,-0.148887939486,-0.149742032652,-0.150595292736,-0.151447720442,
	-0.152299316469,-0.153150081518,-0.154000016291,-0.154849121487,-0.155697397805,
	-0.156544845942,-0.157391466598,-0.158237260470,-0.159082228254,-0.159926370646,
	-0.160769688343,-0.161612182038,-0.162453852428,-0.163294700205,-0.164134726063,
	-0.164973930694,-0.165812314791,-0.166649879046,-0.167486624149,-0.168322550791,
	-0.169157659662,-0.169991951451,-0.170825426846,-0.171658086537,-0.172489931210,
	-0.173320961553,-0.174151178253,-0.174980581994,-0.175809173462,-0.176636953343,
	-0.177463922320,-0.178290081077,-0.179115430297,-0.179939970663,-0.180763702857,
	-0.181586627559,-0.182408745451,-0.183230057213,-0.184050563524,-0.184870265064,
	-0.185689162512,-0.186507256545,-0.187324547841,-0.188141037077,-0.188956724928,
	-0.189771612072,-0.190585699182,-0.191398986935,-0.192211476002,-0.193023167059,
	-0.193834060779,-0.194644157833,-0.195453458894,-0.196261964632,-0.197069675719,
	-0.197876592825,-0.198682716619,-0.199488047771,-0.200292586949,-0.201096334821,
	-0.201899292055,-0.202701459317,-0.203502837273,-0.204303426590,-0.205103227933,
	-0.205902241967,-0.206700469354,-0.207497910760,-0.208294566847,-0.209090438278,
	-0.209885525714,-0.210679829817,-0.211473351248,-0.212266090667,-0.213058048734,
	-0.213849226107,-0.214639623447,-0.215429241410,-0.216218080655,-0.217006141838,
	-0.217793425615,-0.218579932644,-0.219365663579,-0.220150619075,-0.220934799786,
	-0.221718206366,-0.222500839469,-0.223282699747,-0.224063787852,-0.224844104435,
	-0.225623650149,-0.226402425643,-0.227180431568,-0.227957668572,-0.228734137305,
	-0.229509838415,-0.230284772551,-0.231058940358,-0.231832342485,-0.232604979577,
	-0.233376852280,-0.234147961239,-0.234918307100,-0.235687890505,-0.236456712098,
	-0.237224772524,-0.237992072423,-0.238758612439,-0.239524393212,-0.240289415383,
	-0.241053679594,-0.241817186483,-0.242579936690,-0.243341930853,-0.244103169612,
	-0.244863653604,-0.245623383466,-0.246382359834,-0.247140583346,-0.247898054636,
	-0.248654774339,-0.249410743091,-0.250165961525,-0.250920430275,-0.251674149974,
	-0.252427121254,-0.253179344747,-0.253930821085,-0.254681550899,-0.255431534819,
	-0.256180773475,-0.256929267496,-0.257677017511,-0.258424024149,-0.259170288037,
	-0.259915809802,-0.260660590071,-0.261404629472,-0.262147928628,-0.262890488166,
	-0.263632308710,-0.264373390884,-0.265113735312,-0.265853342617,-0.266592213422,
	-0.267330348349,-0.268067748019,-0.268804413054,-0.269540344074,-0.270275541699,
	-0.271010006548,-0.271743739241,-0.272476740397,-0.273209010632,-0.273940550566,
	-0.274671360813,-0.275401441993,-0.276130794719,-0.276859419607,-0.277587317274,
	-0.278314488332,-0.279040933396,-0.279766653079,-0.280491647995,-0.281215918755,
	-0.281939465971,-0.282662290256,-0.283384392219,-0.284105772472,-0.284826431623,
	-0.285546370283,-0.286265589060,-0.286984088563,-0.287701869399,-0.288418932176,
	-0.289135277501,-0.289850905979,-0.290565818218,-0.291280014822,-0.291993496396,
	-0.292706263545,-0.293418316872,-0.294129656980,-0.294840284473,-0.295550199953,
	-0.296259404022,-0.296967897280,-0.297675680330,-0.298382753771,-0.299089118203,
	-0.299794774226,-0.300499722438,-0.301203963438,-0.301907497823,-0.302610326192,
	-0.303312449140,-0.304013867265,-0.304714581162,-0.305414591427,-0.306113898654,
	-0.306812503439,-0.307510406374,-0.308207608054,-0.308904109071,-0.309599910018,
	-0.310295011487,-0.310989414069,-0.311683118356,-0.312376124937,-0.313068434403,
	-0.313760047343,-0.314450964347,-0.315141186003,-0.315830712899,-0.316519545622,
	-0.317207684760,-0.317895130900,-0.318581884626,-0.319267946526,-0.319953317185,
	-0.320637997186,-0.321321987114,-0.322005287553,-0.322687899086,-0.323369822296,
	-0.324051057765,-0.324731606074,-0.325411467806,-0.326090643541,-0.326769133859,
	-0.327446939340,-0.328124060564,-0.328800498109,-0.329476252553,-0.330151324476,
	-0.330825714453,-0.331499423063,-0.332172450882,-0.332844798485,-0.333516466449,
	-0.334187455347,-0.334857765756,-0.335527398249,-0.336196353400,-0.336864631781,
	-0.337532233966,-0.338199160527,-0.338865412035,-0.339530989063,-0.340195892180,
	-0.340860121956,-0.341523678963,-0.342186563769,-0.342848776943,-0.343510319054,
	-0.344171190670,-0.344831392357,-0.345490924684,-0.346149788216,-0.346807983521,
	-0.347465511162,-0.348122371707,-0.348778565718,-0.349434093762,-0.350088956400,
	-0.350743154197,-0.351396687716,-0.352049557519,-0.352701764167,-0.353353308222,
	-0.354004190246,-0.354654410798,-0.355303970439,-0.355952869728,-0.356601109225,
	-0.357248689488,-0.357895611074,-0.358541874543,-0.359187480452,-0.359832429356,
	-0.360476721812,-0.361120358377,-0.361763339606,-0.362405666053,-0.363047338274,
	-0.363688356822,-0.364328722251,-0.364968435113,-0.365607495963,-0.366245905351,
	-0.366883663830,-0.367520771951,-0.368157230264,-0.368793039321,-0.369428199671,
	-0.370062711864,-0.370696576448,-0.371329793973,-0.371962364986,-0.372594290035,
	-0.373225569667,-0.373856204430,-0.374486194868,-0.375115541529,-0.375744244957,
	-0.376372305698,-0.376999724296,-0.377626501295,-0.378252637239,-0.378878132671,
	-0.379502988133,-0.380127204168,-0.380750781317,-0.381373720123,-0.381996021126,
	-0.382617684865,-0.383238711883,-0.383859102717,-0.384478857907,-0.385097977992,
	-0.385716463510,-0.386334314999,-0.386951532996,-0.387568118038,-0.388184070661,
	-0.388799391402,-0.389414080796,-0.390028139378,-0.390641567683,-0.391254366244,
	-0.391866535597,-0.392478076274,-0.393088988808,-0.393699273732,-0.394308931577,
	-0.394917962876,-0.395526368159,-0.396134147957,-0.396741302800,-0.397347833219,
	-0.397953739742,-0.398559022898,-0.399163683217,-0.399767721226,-0.400371137452,
	-0.400973932424,-0.401576106667,-0.402177660709,-0.402778595074,-0.403378910289,
	-0.403978606878,-0.404577685367,-0.405176146278,-0.405773990137,-0.406371217466,
	-0.406967828788,-0.407563824626,-0.408159205501,-0.408753971935,-0.409348124450,
	-0.409941663565,-0.410534589802,-0.411126903680,-0.411718605718,-0.412309696436,
	-0.412900176351,-0.413490045983,-0.414079305849,-0.414667956466,-0.415255998350,
	-0.415843432019,-0.416430257989,-0.417016476774,-0.417602088890,-0.418187094852,
	-0.418771495174,-0.419355290370,-0.419938480953,-0.420521067436,-0.421103050332,
	-0.421684430153,-0.422265207411,-0.422845382616,-0.423424956281,-0.424003928915,
	-0.424582301028,-0.425160073131,-0.425737245731,-0.426313819339,-0.426889794462,
	-0.427465171608,-0.428039951285,-0.428614133999,-0.429187720259,-0.429760710569,
	-0.430333105435,-0.430904905364,-0.431476110859,-0.432046722427,-0.432616740570,
	-0.433186165792,-0.433754998597,-0.434323239488,-0.434890888967,-0.435457947536,
	-0.436024415698,-0.436590293952,-0.437155582801,-0.437720282744,-0.438284394281,
	-0.438847917913,-0.439410854137,-0.439973203454,-0.440534966361,-0.441096143356,
	-0.441656734937,-0.442216741600,-0.442776163844,-0.443335002163,-0.443893257054,
	-0.444450929012,-0.445008018533,-0.445564526110,-0.446120452238,-0.446675797412,
	-0.447230562124,-0.447784746867,-0.448338352135,-0.448891378419,-0.449443826210,
	-0.449995696002,-0.450546988283,-0.451097703546,-0.451647842279,-0.452197404974,
	-0.452746392119,-0.453294804203,-0.453842641714,-0.454389905142,-0.454936594973,
	-0.455482711695,-0.456028255795,-0.456573227760,-0.457117628074,-0.457661457226,
	-0.458204715698,-0.458747403977,-0.459289522548,-0.459831071893,-0.460372052497,
	-0.460912464843,-0.461452309415,-0.461991586693,-0.462530297162,-0.463068441302,
	-0.463606019594,-0.464143032521,-0.464679480561,-0.465215364196,-0.465750683904,
	-0.466285440166,-0.466819633461,-0.467353264266,-0.467886333060,-0.468418840320,
	-0.468950786525,-0.469482172150,-0.470012997674,-0.470543263570,-0.471072970317,
	-0.471602118388,-0.472130708259,-0.472658740404,-0.473186215298,-0.473713133415,
	-0.474239495227,-0.474765301208,-0.475290551830,-0.475815247567,-0.476339388888,
	-0.476862976267,-0.477386010174,-0.477908491080,-0.478430419454,-0.478951795768,
	-0.479472620490,-0.479992894089,-0.480512617035,-0.481031789796,-0.481550412839,
	-0.482068486632,-0.482586011643,-0.483102988337,-0.483619417182,-0.484135298644,
	-0.484650633188,-0.485165421280,-0.485679663383,-0.486193359964,-0.486706511485,
	-0.487219118411,-0.487731181205,-0.488242700330,-0.488753676248,-0.489264109422,
	-0.489774000313,-0.490283349383,-0.490792157093,-0.491300423903,-0.491808150274,
	-0.492315336666,-0.492821983538,-0.493328091349,-0.493833660558,-0.494338691624,
	-0.494843185004,-0.495347141156,-0.495850560537,-0.496353443604,-0.496855790814,
	-0.497357602622,-0.497858879485,-0.498359621858,-0.498859830195,-0.499359504951,
	-0.499858646581,-0.500357255538,-0.500855332276,-0.501352877248,-0.501849890906,
	-0.502346373703,-0.502842326091,-0.503337748521,-0.503832641445,-0.504327005313,
	-0.504820840577,-0.505314147685,-0.505806927088,-0.506299179235,-0.506790904575,
	-0.507282103557,-0.507772776629,-0.508262924238,-0.508752546833,-0.509241644860,
	-0.509730218766,-0.510218268997,-0.510705796000,-0.511192800220,-0.511679282103,
	-0.512165242093,-0.512650680634,-0.513135598172,-0.513619995149,-0.514103872010,
	-0.514587229197,-0.515070067153,-0.515552386320,-0.516034187140,-0.516515470056,
	-0.516996235507,-0.517476483936,-0.517956215781,-0.518435431485,-0.518914131486,
	-0.519392316223,-0.519869986137,-0.520347141665,-0.520823783246,-0.521299911317,
	-0.521775526317,-0.522250628683,-0.522725218851,-0.523199297258,-0.523672864341,
	-0.524145920534,-0.524618466273,-0.525090501994,-0.525562028131,-0.526033045118,
	-0.526503553390,-0.526973553380,-0.527443045522,-0.527912030247,-0.528380507989,
	-0.528848479180,-0.529315944252,-0.529782903637,-0.530249357764,-0.530715307066,
	-0.531180751973,-0.531645692914,-0.532110130319,-0.532574064618,-0.533037496239,
	-0.533500425612,-0.533962853164,-0.534424779324,-0.534886204518,-0.535347129175,
	-0.535807553721,-0.536267478582,-0.536726904185,-0.537185830955,-0.537644259319,
	-0.538102189700,-0.538559622524,-0.539016558215,-0.539472997197,-0.539928939894,
	-0.540384386730,-0.540839338126,-0.541293794506,-0.541747756293,-0.542201223907,
	-0.542654197771,-0.543106678305,-0.543558665932,-0.544010161070,-0.544461164141,
	-0.544911675564,-0.545361695759,-0.545811225145,-0.546260264141,-0.546708813164,
	-0.547156872634,-0.547604442968,-0.548051524583,-0.548498117897,-0.548944223326,
	-0.549389841286,-0.549834972194,-0.550279616465,-0.550723774515,-0.551167446759,
	-0.551610633610,-0.552053335485,-0.552495552796,-0.552937285957,-0.553378535381,
	-0.553819301482,-0.554259584672,-0.554699385363,-0.555138703968,-0.555577540897,
	-0.556015896562,-0.556453771374,-0.556891165743,-0.557328080080,-0.557764514794,
	-0.558200470296,-0.558635946993,-0.559070945296,-0.559505465612,-0.559939508351,
	-0.560373073918,-0.560806162723,-0.561238775172,-0.561670911673,-0.562102572631,
	-0.562533758452,-0.562964469543,-0.563394706310,-0.563824469156,-0.564253758488,
	-0.564682574708,-0.565110918223,-0.565538789435,-0.565966188748,-0.566393116565,
	-0.566819573289,-0.567245559322,-0.567671075066,-0.568096120924,-0.568520697297,
	-0.568944804585,-0.569368443190,-0.569791613512,-0.570214315952,-0.570636550908,
	-0.571058318781,-0.571479619970,-0.571900454873,-0.572320823890,-0.572740727417,
	-0.573160165854,-0.573579139597,-0.573997649043,-0.574415694591,-0.574833276635,
	-0.575250395572,-0.575667051799,-0.576083245710,-0.576498977701,-0.576914248166,
	-0.577329057501,-0.577743406099,-0.578157294355,-0.578570722661,-0.578983691411,
	-0.579396200999,-0.579808251816,-0.580219844255,-0.580630978708,-0.581041655566,
	-0.581451875221,-0.581861638064,-0.582270944485,-0.582679794874,-0.583088189622,
	-0.583496129119,-0.583903613753,-0.584310643914,-0.584717219990,-0.585123342370,
	-0.585529011442,-0.585934227594,-0.586338991212,-0.586743302685,-0.587147162398,
	-0.587550570739,-0.587953528093,-0.588356034846,-0.588758091385,-0.589159698093,
	-0.589560855356,-0.589961563558,-0.590361823084,-0.590761634317,-0.591160997641,
	-0.591559913440,-0.591958382096,-0.592356403991,-0.592753979509,-0.593151109031,
	-0.593547792939,-0.593944031614,-0.594339825438,-0.594735174791,-0.595130080053,
	-0.595524541604,-0.595918559825,-0.596312135095,-0.596705267792,-0.597097958297,
	-0.597490206987,-0.597882014240,-0.598273380435,-0.598664305949,-0.599054791159,
	-0.599444836442,-0.599834442176,-0.600223608736,-0.600612336498,-0.601000625838,
	-0.601388477132,-0.601775890754,-0.602162867079,-0.602549406482,-0.602935509338,
	-0.603321176019,-0.603706406899,-0.604091202352,-0.604475562751,-0.604859488468,
	-0.605242979875,-0.605626037345,-0.606008661248,-0.606390851958,-0.606772609844,
	-0.607153935277,-0.607534828628,-0.607915290267,-0.608295320564,-0.608674919889,
	-0.609054088610,-0.609432827096,-0.609811135717,-0.610189014840,-0.610566464834,
	-0.610943486066,-0.611320078904,-0.611696243714,-0.612071980864,-0.612447290720,
	-0.612822173648,-0.613196630014,-0.613570660184,-0.613944264522,-0.614317443395,
	-0.614690197166,-0.615062526200,-0.615434430862,-0.615805911514,-0.616176968520,
	-0.616547602243,-0.616917813047,-0.617287601294,-0.617656967346,-0.618025911565,
	-0.618394434313,-0.618762535951,-0.619130216840,-0.619497477341,-0.619864317814,
	-0.620230738620,-0.620596740118,-0.620962322669,-0.621327486630,-0.621692232362,
	-0.622056560223,-0.622420470571,-0.622783963764,-0.623147040161,-0.623509700118,
	-0.623871943994,-0.624233772144,-0.624595184925,-0.624956182694,-0.625316765807,
	-0.625676934619,-0.626036689486,-0.626396030763,-0.626754958804,-0.627113473965,
	-0.627471576600,-0.627829267062,-0.628186545705,-0.628543412883,-0.628899868948,
	-0.629255914254,-0.629611549152,-0.629966773996,-0.630321589137,-0.630675994926,
	-0.631029991715,-0.631383579855,-0.631736759697,-0.632089531591,-0.632441895887,
	-0.632793852935,-0.633145403085,-0.633496546687,-0.633847284088,-0.634197615637,
	-0.634547541684,-0.634897062577,-0.635246178662,-0.635594890288,-0.635943197802,
	-0.636291101551,-0.636638601881,-0.636985699140,-0.637332393672,-0.637678685825,
	-0.638024575943,-0.638370064371,-0.638715151456,-0.639059837541,-0.639404122971,
	-0.639748008089,-0.640091493241,-0.640434578768,-0.640777265016,-0.641119552325,
	-0.641461441040,-0.641802931503,-0.642144024055,-0.642484719039,-0.642825016796,
	-0.643164917668,-0.643504421995,-0.643843530118,-0.644182242377,-0.644520559114,
	-0.644858480666,-0.645196007375,-0.645533139580,-0.645869877618,-0.646206221830,
	-0.646542172554,-0.646877730127,-0.647212894888,-0.647547667174,-0.647882047323,
	-0.648216035672,-0.648549632557,-0.648882838315,-0.649215653282,-0.649548077795,
	-0.649880112188,-0.650211756797,-0.650543011957,-0.650873878004,-0.651204355271,
	-0.651534444093,-0.651864144804,-0.652193457738,-0.652522383228,-0.652850921607,
	-0.653179073208,-0.653506838364,-0.653834217406,-0.654161210668,-0.654487818481,
	-0.654814041176,-0.655139879085,-0.655465332539,-0.655790401867,-0.656115087402,
	-0.656439389472,-0.656763308408,-0.657086844540,-0.657409998196,-0.657732769705,
	-0.658055159397,-0.658377167600,-0.658698794643,-0.659020040852,-0.659340906556,
	-0.659661392082,-0.659981497758,-0.660301223910,-0.660620570865,-0.660939538949,
	-0.661258128488,-0.661576339808,-0.661894173235,-0.662211629093,-0.662528707708,
	-0.662845409405,-0.663161734507,-0.663477683340,-0.663793256226,-0.664108453491,
	-0.664423275456,-0.664737722445,-0.665051794781,-0.665365492786,-0.665678816784,
	-0.665991767094,-0.666304344041,-0.666616547945,-0.666928379126,-0.667239837907,
	-0.667550924608,-0.667861639549,-0.668171983051,-0.668481955433,-0.668791557015,
	-0.669100788117,-0.669409649057,-0.669718140154,-0.670026261727,-0.670334014095,
	-0.670641397574,-0.670948412484,-0.671255059141,-0.671561337863,-0.671867248967,
	-0.672172792770,-0.672477969587,-0.672782779735,-0.673087223531,-0.673391301290,
	-0.673695013326,-0.673998359956,-0.674301341495,-0.674603958256,-0.674906210555,
	-0.675208098705,-0.675509623020,-0.675810783814,-0.676111581401,-0.676412016092,
	-0.676712088202,-0.677011798042,-0.677311145925,-0.677610132163,-0.677908757068,
	-0.678207020951,-0.678504924124,-0.678802466897,-0.679099649581,-0.679396472487,
	-0.679692935925,-0.679989040205,-0.680284785637,-0.680580172530,-0.680875201193,
	-0.681169871935,-0.681464185065,-0.681758140892,-0.682051739723,-0.682344981866,
	-0.682637867630,-0.682930397321,-0.683222571247,-0.683514389715,-0.683805853031,
	-0.684096961501,-0.684387715432,-0.684678115130,-0.684968160900,-0.685257853048,
	-0.685547191879,-0.685836177697,-0.686124810808,-0.686413091515,-0.686701020123,
	-0.686988596935,-0.687275822256,-0.687562696389,-0.687849219636,-0.688135392300,
	-0.688421214685,-0.688706687092,-0.688991809824,-0.689276583182,-0.689561007469,
	-0.689845082985,-0.690128810031,-0.690412188909,-0.690695219918,-0.690977903360,
	-0.691260239534,-0.691542228741,-0.691823871279,-0.692105167449,-0.692386117549,
	-0.692666721878,-0.692946980735,-0.693226894418,-0.693506463226,-0.693785687455,
	-0.694064567405,-0.694343103371,-0.694621295652,-0.694899144544,-0.695176650344,
	-0.695453813348,-0.695730633852,-0.696007112153,-0.696283248545,-0.696559043325,
	-0.696834496788,-0.697109609227,-0.697384380939,-0.697658812217,-0.697932903356,
	-0.698206654650,-0.698480066392,-0.698753138875,-0.699025872394,-0.699298267241,
	-0.699570323708,-0.699842042088,-0.700113422674,-0.700384465758,-0.700655171630,
	-0.700925540583,-0.701195572908,-0.701465268896,-0.701734628838,-0.702003653024,
	-0.702272341745,-0.702540695290,-0.702808713950,-0.703076398014,-0.703343747771,
	-0.703610763511,-0.703877445522,-0.704143794094,-0.704409809513,-0.704675492070,
	-0.704940842051,-0.705205859743,-0.705470545436,-0.705734899415,-0.705998921968,
	-0.706262613381,-0.706525973941,-0.706789003935,-0.707051703647,-0.707314073365,
	-0.707576113372,-0.707837823956,-0.708099205400,-0.708360257990,-0.708620982010,
	-0.708881377745,-0.709141445478,-0.709401185494,-0.709660598076,-0.709919683507,
	-0.710178442071,-0.710436874051,-0.710694979729,-0.710952759388,-0.711210213310,
	-0.711467341777,-0.711724145070,-0.711980623472,-0.712236777264,-0.712492606726,
	-0.712748112140,-0.713003293786,-0.713258151945,-0.713512686896,-0.713766898919,
	-0.714020788295,-0.714274355302,-0.714527600220,-0.714780523327,-0.715033124904,
	-0.715285405227,-0.715537364575,-0.715789003227,-0.716040321460,-0.716291319551,
	-0.716541997779,-0.716792356420,-0.717042395751,-0.717292116048,-0.717541517589,
	-0.717790600649,-0.718039365505,-0.718287812432,-0.718535941705,-0.718783753600,
	-0.719031248392,-0.719278426356,-0.719525287766,-0.719771832897,-0.720018062024,
	-0.720263975418,-0.720509573356,-0.720754856109,-0.720999823952,-0.721244477157,
	-0.721488815997,-0.721732840744,-0.721976551672,-0.722219949051,-0.722463033155,
	-0.722705804254,-0.722948262620,-0.723190408524,-0.723432242238,-0.723673764031,
	-0.723914974175,-0.724155872940,-0.724396460595,-0.724636737412,-0.724876703659,
	-0.725116359605,-0.725355705521,-0.725594741674,-0.725833468334,-0.726071885769,
	-0.726309994248,-0.726547794038,-0.726785285408,-0.727022468625,-0.727259343956,
	-0.727495911669,-0.727732172030,-0.727968125307,-0.728203771766,-0.728439111673,
	-0.728674145293,-0.728908872895,-0.729143294741,-0.729377411099,-0.729611222233,
	-0.729844728409,-0.730077929890,-0.730310826942,-0.730543419829,-0.730775708815,
	-0.731007694164,-0.731239376140,-0.731470755005,-0.731701831024,-0.731932604458,
	-0.732163075572,-0.732393244627,-0.732623111887,-0.732852677612,-0.733081942065,
	-0.733310905508,-0.733539568201,-0.733767930408,-0.733995992387,-0.734223754401,
	-0.734451216710,-0.734678379574,-0.734905243253,-0.735131808008,-0.735358074097,
	-0.735584041782,-0.735809711320,-0.736035082972,-0.736260156995,-0.736484933649,
	-0.736709413193,-0.736933595883,-0.737157481979,-0.737381071738,-0.737604365418,
	-0.737827363276,-0.738050065569,-0.738272472554,-0.738494584489,-0.738716401629,
	-0.738937924231,-0.739159152551,-0.739380086845,-0.739600727368,-0.739821074376,
	-0.740041128125,-0.740260888869,-0.740480356863,-0.740699532362,-0.740918415620,
	-0.741137006891,-0.741355306430,-0.741573314490,-0.741791031325,-0.742008457187,
	-0.742225592331,-0.742442437009,-0.742658991474,-0.742875255978,-0.743091230774,
	-0.743306916114,-0.743522312250,-0.743737419432,-0.743952237914,-0.744166767946,
	-0.744381009779,-0.744594963663,-0.744808629851,-0.745022008591,-0.745235100135,
	-0.745447904732,-0.745660422632,-0.745872654085,-0.746084599340,-0.746296258646,
	-0.746507632252,-0.746718720407,-0.746929523360,-0.747140041358,-0.747350274651,
	-0.747560223486,-0.747769888110,-0.747979268772,-0.748188365718,-0.748397179196,
	-0.748605709453,-0.748813956735,-0.749021921288,-0.749229603360,-0.749437003196,
	-0.749644121043,-0.749850957145,-0.750057511748,-0.750263785098,-0.750469777440,
	-0.750675489018,-0.750880920077,-0.751086070863,-0.751290941618,-0.751495532587,
	-0.751699844013,-0.751903876142,-0.752107629215,-0.752311103477,-0.752514299169,
	-0.752717216536,-0.752919855820,-0.753122217263,-0.753324301107,-0.753526107595,
	-0.753727636968,-0.753928889468,-0.754129865337,-0.754330564815,-0.754530988144,
	-0.754731135564,-0.754931007317,-0.755130603642,-0.755329924780,-0.755528970971,
	-0.755727742454,-0.755926239470,-0.756124462258,-0.756322411057,-0.756520086106,
	-0.756717487643,-0.756914615909,-0.757111471140,-0.757308053576,-0.757504363454,
	-0.757700401012,-0.757896166488,-0.758091660120,-0.758286882144,-0.758481832798,
	-0.758676512318,-0.758870920941,-0.759065058904,-0.759258926443,-0.759452523794,
	-0.759645851193,-0.759838908876,-0.760031697077,-0.760224216034,-0.760416465979,
	-0.760608447149,-0.760800159778,-0.760991604101,-0.761182780352,-0.761373688765,
	-0.761564329574,-0.761754703013,-0.761944809315,-0.762134648714,-0.762324221442,
	-0.762513527734,-0.762702567821,-0.762891341936,-0.763079850312,-0.763268093180,
	-0.763456070774,-0.763643783324,-0.763831231062,-0.764018414219,-0.764205333028,
	-0.764391987718,-0.764578378521,-0.764764505668,-0.764950369388,-0.765135969912,
	-0.765321307471,-0.765506382294,-0.765691194610,-0.765875744650,-0.766060032642,
	-0.766244058816,-0.766427823401,-0.766611326625,-0.766794568717,-0.766977549905,
	-0.767160270418,-0.767342730484,-0.767524930329,-0.767706870183,-0.767888550272,
	-0.768069970823,-0.768251132064,-0.768432034222,-0.768612677522,-0.768793062192,
	-0.768973188458,-0.769153056546,-0.769332666682,-0.769512019092,-0.769691114000,
	-0.769869951633,-0.770048532216,-0.770226855974,-0.770404923131,-0.770582733911,
	-0.770760288541,-0.770937587243,-0.771114630241,-0.771291417761,-0.771467950024,
	-0.771644227255,-0.771820249677,-0.771996017514,-0.772171530987,-0.772346790320,
	-0.772521795736,-0.772696547456,-0.772871045704,-0.773045290700,-0.773219282667,
	-0.773393021826,-0.773566508399,-0.773739742607,-0.773912724672,-0.774085454813,
	-0.774257933252,-0.774430160210,-0.774602135906,-0.774773860561,-0.774945334395,
	-0.775116557627,-0.775287530478,-0.775458253167,-0.775628725912,-0.775798948933,
	-0.775968922450,-0.776138646679,-0.776308121841,-0.776477348154,-0.776646325835,
	-0.776815055102,-0.776983536174,-0.777151769268,-0.777319754602,-0.777487492392,
	-0.777654982856,-0.777822226211,-0.777989222673,-0.778155972459,-0.778322475785,
	-0.778488732868,-0.778654743923,-0.778820509166,-0.778986028814,-0.779151303080,
	-0.779316332182,-0.779481116333,-0.779645655749,-0.779809950644,-0.779974001233,
	-0.780137807731,-0.780301370351,-0.780464689308,-0.780627764815,-0.780790597086,
	-0.780953186335,-0.781115532775,-0.781277636619,-0.781439498081,-0.781601117371,
	-0.781762494705,-0.781923630293,-0.782084524348,-0.782245177083,-0.782405588709,
	-0.782565759437,-0.782725689480,-0.782885379049,-0.783044828355,-0.783204037609,
	-0.783363007021,-0.783521736804,-0.783680227166,-0.783838478318,-0.783996490472,
	-0.784154263835,-0.784311798619,-0.784469095033,-0.784626153286,-0.784782973588,
	-0.784939556147,-0.785095901174,-0.785252008875,-0.785407879461,-0.785563513139,
	-0.785718910118,-0.785874070606,-0.786028994810,-0.786183682938,-0.786338135199,
	-0.786492351798,-0.786646332945,-0.786800078844,-0.786953589704,-0.787106865731,
	-0.787259907132,-0.787412714112,-0.787565286878,-0.787717625637,-0.787869730593,
	-0.788021601953,-0.788173239922,-0.788324644705,-0.788475816508,-0.788626755535,
	-0.788777461992,-0.788927936082,-0.789078178011,-0.789228187982,-0.789377966200,
	-0.789527512868,-0.789676828192,-0.789825912373,-0.789974765616,-0.790123388123,
	-0.790271780099,-0.790419941745,-0.790567873265,-0.790715574861,-0.790863046736,
	-0.791010289092,-0.791157302131,-0.791304086055,-0.791450641065,-0.791596967364,
	-0.791743065152,-0.791888934632,-0.792034576003,-0.792179989468,-0.792325175226,
	-0.792470133478,-0.792614864425,-0.792759368268,-0.792903645205,-0.793047695437,
	-0.793191519164,-0.793335116586,-0.793478487901,-0.793621633309,-0.793764553009,
	-0.793907247201,-0.794049716082,-0.794191959851,-0.794333978707,-0.794475772849,
	-0.794617342473,-0.794758687779,-0.794899808964,-0.795040706225,-0.795181379760,
	-0.795321829766,-0.795462056441,-0.795602059981,-0.795741840583,-0.795881398443,
	-0.796020733759,-0.796159846726,-0.796298737541,-0.796437406399,-0.796575853497,
	-0.796714079030,-0.796852083193,-0.796989866182,-0.797127428192,-0.797264769417,
	-0.797401890054,-0.797538790296,-0.797675470338,-0.797811930374,-0.797948170599,
	-0.798084191206,-0.798219992390,-0.798355574343,-0.798490937260,-0.798626081335,
	-0.798761006759,-0.798895713727,-0.799030202430,-0.799164473063,-0.799298525817,
	-0.799432360885,-0.799565978459,-0.799699378731,-0.799832561894,-0.799965528138,
	-0.800098277656,-0.800230810639,-0.800363127278,-0.800495227764,-0.800627112289,
	-0.800758781044,-0.800890234218,-0.801021472002,-0.801152494587,-0.801283302163,
	-0.801413894920,-0.801544273048,-0.801674436737,-0.801804386175,-0.801934121553,
	-0.802063643060,-0.802192950884,-0.802322045215,-0.802450926242,-0.802579594153,
	-0.802708049136,-0.802836291380,-0.802964321073,-0.803092138403,-0.803219743558,
	-0.803347136726,-0.803474318093,-0.803601287848,-0.803728046177,-0.803854593268,
	-0.803980929307,-0.804107054481,-0.804232968978,-0.804358672982,-0.804484166681,
	-0.804609450260,-0.804734523907,-0.804859387805,-0.804984042141,-0.805108487101,
	-0.805232722870,-0.805356749633,-0.805480567575,-0.805604176881,-0.805727577735,
	-0.805850770323,-0.805973754829,-0.806096531436,-0.806219100330,-0.806341461693,
	-0.806463615710,-0.806585562565,-0.806707302441,-0.806828835521,-0.806950161988,
	-0.807071282026,-0.807192195818,-0.807312903545,-0.807433405391,-0.807553701539,
	-0.807673792170,-0.807793677467,-0.807913357611,-0.808032832784,-0.808152103169,
	-0.808271168946,-0.808390030298,-0.808508687404,-0.808627140447,-0.808745389607,
	-0.808863435065,-0.808981277001,-0.809098915597,-0.809216351032,-0.809333583486,
	-0.809450613140,-0.809567440173,-0.809684064766,-0.809800487097,-0.809916707347,
	-0.810032725693,-0.810148542317,-0.810264157396,-0.810379571109,-0.810494783635,
	-0.810609795153,-0.810724605841,-0.810839215876,-0.810953625439,-0.811067834705,
	-0.811181843853,-0.811295653061,-0.811409262505,-0.811522672365,-0.811635882815,
	-0.811748894035,-0.811861706200,-0.811974319487,-0.812086734074,-0.812198950135,
	-0.812310967849,-0.812422787390,-0.812534408935,-0.812645832659,-0.812757058740,
	-0.812868087351,-0.812978918668,-0.813089552868,-0.813199990124,-0.813310230612,
	-0.813420274507,-0.813530121984,-0.813639773216,-0.813749228379,-0.813858487647,
	-0.813967551193,-0.814076419192,-0.814185091818,-0.814293569243,-0.814401851643,
	-0.814509939190,-0.814617832058,-0.814725530419,-0.814833034447,-0.814940344314,
	-0.815047460193,-0.815154382257,-0.815261110678,-0.815367645628,-0.815473987279,
	-0.815580135804,-0.815686091374,-0.815791854160,-0.815897424335,-0.816002802070,
	-0.816107987535,-0.816212980903,-0.816317782344,-0.816422392028,-0.816526810127,
	-0.816631036812,-0.816735072251,-0.816838916617,-0.816942570078,-0.817046032805,
	-0.817149304967,-0.817252386735,-0.817355278278,-0.817457979764,-0.817560491365,
	-0.817662813248,-0.817764945582,-0.817866888537,-0.817968642281,-0.818070206983,
	-0.818171582811,-0.818272769933,-0.818373768518,-0.818474578734,-0.818575200747,
	-0.818675634727,-0.818775880840,-0.818875939255,-0.818975810138,-0.819075493656,
	-0.819174989977,-0.819274299268,-0.819373421695,-0.819472357424,-0.819571106623,
	-0.819669669457,-0.819768046093,-0.819866236697,-0.819964241435,-0.820062060472,
	-0.820159693974,-0.820257142107,-0.820354405036,-0.820451482926,-0.820548375943,
	-0.820645084251,-0.820741608014,-0.820837947399,-0.820934102568,-0.821030073688,
	-0.821125860921,-0.821221464432,-0.821316884386,-0.821412120945,-0.821507174274,
	-0.821602044536,-0.821696731894,-0.821791236513,-0.821885558554,-0.821979698182,
	-0.822073655558,-0.822167430847,-0.822261024209,-0.822354435809,-0.822447665808,
	-0.822540714368,-0.822633581652,-0.822726267821,-0.822818773038,-0.822911097463,
	-0.823003241259,-0.823095204587,-0.823186987608,-0.823278590484,-0.823370013375,
	-0.823461256442,-0.823552319846,-0.823643203748,-0.823733908307,-0.823824433685,
	-0.823914780042,-0.824004947537,-0.824094936331,-0.824184746583,-0.824274378454,
	-0.824363832102,-0.824453107687,-0.824542205368,-0.824631125304,-0.824719867655,
	-0.824808432580,-0.824896820236,-0.824985030783,-0.825073064379,-0.825160921183,
	-0.825248601352,-0.825336105045,-0.825423432420,-0.825510583635,-0.825597558846,
	-0.825684358212,-0.825770981891,-0.825857430039,-0.825943702814,-0.826029800372,
	-0.826115722871,-0.826201470467,-0.826287043318,-0.826372441578,-0.826457665406,
	-0.826542714957,-0.826627590387,-0.826712291852,-0.826796819509,-0.826881173512,
	-0.826965354017,-0.827049361181,-0.827133195158,-0.827216856103,-0.827300344172,
	-0.827383659519,-0.827466802299,-0.827549772667,-0.827632570778,-0.827715196786,
	-0.827797650845,-0.827879933110,-0.827962043734,-0.828043982872,-0.828125750677,
	-0.828207347302,-0.828288772902,-0.828370027630,-0.828451111639,-0.828532025082,
	-0.828612768113,-0.828693340884,-0.828773743547,-0.828853976256,-0.828934039164,
	-0.829013932422,-0.829093656182,-0.829173210598,-0.829252595820,-0.829331812001,
	-0.829410859293,-0.829489737847,-0.829568447814,-0.829646989347,-0.829725362595,
	-0.829803567712,-0.829881604846,-0.829959474150,-0.830037175774,-0.830114709869,
	-0.830192076584,-0.830269276071,-0.830346308480,-0.830423173961,-0.830499872664,
	-0.830576404738,-0.830652770334,-0.830728969600,-0.830805002688,-0.830880869745,
	-0.830956570922,-0.831032106367,-0.831107476229,-0.831182680657,-0.831257719800,
	-0.831332593807,-0.831407302826,-0.831481847005,-0.831556226493,-0.831630441437,
	-0.831704491987,-0.831778378289,-0.831852100491,-0.831925658742,-0.831999053188,
	-0.832072283977,-0.832145351257,-0.832218255174
	}
};

double always_inline s08_stage7_negclip(double x) {
    double f = fabs(x);
    f = f * s08_stage7_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s08_stage7_neg_table.data[0];
    } else if (i >= s08_stage7_neg_table.size-1) {
        f = s08_stage7_neg_table.data[s08_stage7_neg_table.size-1];
    } else {
        f -= i;
        f = s08_stage7_neg_table.data[i]*(1-f) + s08_stage7_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}


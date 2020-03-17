
// c03_stage2_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  43.946292
 // --table_op  1.000000

struct tablec03_stage2 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tablec03_stage2_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tablec03_stage2&() const { return *(tablec03_stage2*)this; }
};

static tablec03_stage2_imp<2048> c03_stage2_table __rt_data = {
	0,-2.28499,204.7,2048, {
	0.000000000000,-0.002114599064,-0.004162278072,-0.006154501038,-0.008100613885,
	-0.010008239910,-0.011883601436,-0.013731781387,-0.015556935997,-0.017362467748,
	-0.019151165978,-0.020925321191,-0.022686817980,-0.024437210574,-0.026177784244,
	-0.027909605222,-0.029633561289,-0.031350394757,-0.033060729294,-0.034765091726,
	-0.036463929769,-0.038157626439,-0.039846511782,-0.041530872400,-0.043210959216,
	-0.044886993776,-0.046559173389,-0.048227675306,-0.049892660122,-0.051554274554,
	-0.053212653694,-0.054867922861,-0.056520199096,-0.058169592400,-0.059816206733,
	-0.061460140840,-0.063101488921,-0.064740341194,-0.066376784341,-0.068010901891,
	-0.069642774531,-0.071272480362,-0.072900095117,-0.074525692339,-0.076149343535,
	-0.077771118304,-0.079391084447,-0.081009308061,-0.082625853615,-0.084240784031,
	-0.085854160735,-0.087466043719,-0.089076491589,-0.090685561607,-0.092293309733,
	-0.093899790662,-0.095505057857,-0.097109163583,-0.098712158934,-0.100314093865,
	-0.101915017213,-0.103514976729,-0.105114019097,-0.106712189960,-0.108309533943,
	-0.109906094673,-0.111501914801,-0.113097036023,-0.114691499100,-0.116285343875,
	-0.117878609294,-0.119471333427,-0.121063553480,-0.122655305816,-0.124246625974,
	-0.125837548683,-0.127428107878,-0.129018336719,-0.130608267604,-0.132197932187,
	-0.133787361391,-0.135376585424,-0.136965633792,-0.138554535318,-0.140143318148,
	-0.141732009772,-0.143320637033,-0.144909226143,-0.146497802694,-0.148086391671,
	-0.149675017465,-0.151263703884,-0.152852474167,-0.154441350992,-0.156030356493,
	-0.157619512264,-0.159208839378,-0.160798358390,-0.162388089354,-0.163978051829,
	-0.165568264892,-0.167158747144,-0.168749516726,-0.170340591323,-0.171931988174,
	-0.173523724087,-0.175115815437,-0.176708278188,-0.178301127890,-0.179894379695,
	-0.181488048362,-0.183082148265,-0.184676693404,-0.186271697408,-0.187867173547,
	-0.189463134738,-0.191059593552,-0.192656562220,-0.194254052643,-0.195852076397,
	-0.197450644741,-0.199049768621,-0.200649458679,-0.202249725260,-0.203850578417,
	-0.205452027914,-0.207054083240,-0.208656753606,-0.210260047958,-0.211863974977,
	-0.213468543088,-0.215073760465,-0.216679635036,-0.218286174487,-0.219893386269,
	-0.221501277602,-0.223109855480,-0.224719126677,-0.226329097748,-0.227939775039,
	-0.229551164688,-0.231163272630,-0.232776104602,-0.234389666146,-0.236003962615,
	-0.237618999175,-0.239234780812,-0.240851312333,-0.242468598371,-0.244086643388,
	-0.245705451680,-0.247325027382,-0.248945374466,-0.250566496750,-0.252188397900,
	-0.253811081432,-0.255434550716,-0.257058808979,-0.258683859310,-0.260309704659,
	-0.261936347845,-0.263563791556,-0.265192038350,-0.266821090664,-0.268450950809,
	-0.270081620981,-0.271713103254,-0.273345399594,-0.274978511850,-0.276612441767,
	-0.278247190979,-0.279882761019,-0.281519153317,-0.283156369203,-0.284794409912,
	-0.286433276581,-0.288072970258,-0.289713491896,-0.291354842362,-0.292997022437,
	-0.294640032816,-0.296283874111,-0.297928546855,-0.299574051501,-0.301220388425,
	-0.302867557929,-0.304515560240,-0.306164395514,-0.307814063838,-0.309464565229,
	-0.311115899638,-0.312768066951,-0.314421066991,-0.316074899517,-0.317729564230,
	-0.319385060770,-0.321041388720,-0.322698547606,-0.324356536902,-0.326015356024,
	-0.327675004339,-0.329335481162,-0.330996785759,-0.332658917346,-0.334321875094,
	-0.335985658125,-0.337650265520,-0.339315696312,-0.340981949495,-0.342649024020,
	-0.344316918796,-0.345985632695,-0.347655164549,-0.349325513154,-0.350996677269,
	-0.352668655616,-0.354341446884,-0.356015049729,-0.357689462772,-0.359364684605,
	-0.361040713787,-0.362717548848,-0.364395188287,-0.366073630576,-0.367752874160,
	-0.369432917455,-0.371113758852,-0.372795396716,-0.374477829389,-0.376161055187,
	-0.377845072404,-0.379529879310,-0.381215474154,-0.382901855164,-0.384589020547,
	-0.386276968489,-0.387965697159,-0.389655204704,-0.391345489256,-0.393036548927,
	-0.394728381813,-0.396420985992,-0.398114359529,-0.399808500469,-0.401503406847,
	-0.403199076681,-0.404895507973,-0.406592698716,-0.408290646886,-0.409989350448,
	-0.411688807356,-0.413389015551,-0.415089972962,-0.416791677509,-0.418494127100,
	-0.420197319634,-0.421901252999,-0.423605925076,-0.425311333736,-0.427017476840,
	-0.428724352243,-0.430431957792,-0.432140291325,-0.433849350674,-0.435559133664,
	-0.437269638114,-0.438980861836,-0.440692802637,-0.442405458318,-0.444118826674,
	-0.445832905497,-0.447547692572,-0.449263185681,-0.450979382602,-0.452696281108,
	-0.454413878970,-0.456132173954,-0.457851163823,-0.459570846338,-0.461291219257,
	-0.463012280336,-0.464734027327,-0.466456457983,-0.468179570051,-0.469903361281,
	-0.471627829419,-0.473352972209,-0.475078787396,-0.476805272724,-0.478532425936,
	-0.480260244773,-0.481988726978,-0.483717870292,-0.485447672458,-0.487178131218,
	-0.488909244315,-0.490641009491,-0.492373424490,-0.494106487057,-0.495840194938,
	-0.497574545878,-0.499309537627,-0.501045167933,-0.502781434547,-0.504518335221,
	-0.506255867710,-0.507994029770,-0.509732819158,-0.511472233634,-0.513212270961,
	-0.514952928904,-0.516694205228,-0.518436097705,-0.520178604106,-0.521921722205,
	-0.523665449780,-0.525409784613,-0.527154724486,-0.528900267185,-0.530646410501,
	-0.532393152227,-0.534140490159,-0.535888422096,-0.537636945842,-0.539386059202,
	-0.541135759989,-0.542886046014,-0.544636915097,-0.546388365058,-0.548140393723,
	-0.549892998920,-0.551646178484,-0.553399930252,-0.555154252065,-0.556909141768,
	-0.558664597211,-0.560420616249,-0.562177196739,-0.563934336544,-0.565692033531,
	-0.567450285572,-0.569209090543,-0.570968446323,-0.572728350799,-0.574488801859,
	-0.576249797398,-0.578011335315,-0.579773413513,-0.581536029901,-0.583299182393,
	-0.585062868905,-0.586827087360,-0.588591835687,-0.590357111818,-0.592122913690,
	-0.593889239245,-0.595656086431,-0.597423453200,-0.599191337509,-0.600959737321,
	-0.602728650603,-0.604498075327,-0.606268009471,-0.608038451016,-0.609809397952,
	-0.611580848271,-0.613352799970,-0.615125251053,-0.616898199527,-0.618671643407,
	-0.620445580711,-0.622220009463,-0.623994927691,-0.625770333430,-0.627546224719,
	-0.629322599603,-0.631099456132,-0.632876792361,-0.634654606350,-0.636432896165,
	-0.638211659877,-0.639990895562,-0.641770601301,-0.643550775181,-0.645331415294,
	-0.647112519738,-0.648894086614,-0.650676114030,-0.652458600099,-0.654241542941,
	-0.656024940677,-0.657808791437,-0.659593093355,-0.661377844570,-0.663163043228,
	-0.664948687477,-0.666734775472,-0.668521305375,-0.670308275350,-0.672095683569,
	-0.673883528206,-0.675671807445,-0.677460519470,-0.679249662474,-0.681039234654,
	-0.682829234211,-0.684619659353,-0.686410508292,-0.688201779245,-0.689993470436,
	-0.691785580093,-0.693578106448,-0.695371047739,-0.697164402210,-0.698958168109,
	-0.700752343690,-0.702546927211,-0.704341916936,-0.706137311134,-0.707933108078,
	-0.709729306047,-0.711525903325,-0.713322898202,-0.715120288970,-0.716918073929,
	-0.718716251383,-0.720514819641,-0.722313777016,-0.724113121827,-0.725912852399,
	-0.727712967058,-0.729513464140,-0.731314341982,-0.733115598928,-0.734917233326,
	-0.736719243529,-0.738521627895,-0.740324384787,-0.742127512571,-0.743931009621,
	-0.745734874313,-0.747539105029,-0.749343700156,-0.751148658084,-0.752953977211,
	-0.754759655936,-0.756565692666,-0.758372085809,-0.760178833782,-0.761985935003,
	-0.763793387895,-0.765601190889,-0.767409342416,-0.769217840915,-0.771026684828,
	-0.772835872601,-0.774645402687,-0.776455273540,-0.778265483622,-0.780076031397,
	-0.781886915334,-0.783698133907,-0.785509685594,-0.787321568878,-0.789133782246,
	-0.790946324188,-0.792759193201,-0.794572387784,-0.796385906442,-0.798199747684,
	-0.800013910022,-0.801828391973,-0.803643192059,-0.805458308805,-0.807273740741,
	-0.809089486402,-0.810905544325,-0.812721913053,-0.814538591133,-0.816355577114,
	-0.818172869552,-0.819990467006,-0.821808368038,-0.823626571215,-0.825445075109,
	-0.827263878294,-0.829082979350,-0.830902376859,-0.832722069409,-0.834542055589,
	-0.836362333996,-0.838182903228,-0.840003761887,-0.841824908580,-0.843646341918,
	-0.845468060514,-0.847290062986,-0.849112347957,-0.850934914052,-0.852757759901,
	-0.854580884136,-0.856404285394,-0.858227962316,-0.860051913547,-0.861876137733,
	-0.863700633528,-0.865525399585,-0.867350434564,-0.869175737128,-0.871001305941,
	-0.872827139675,-0.874653237002,-0.876479596598,-0.878306217145,-0.880133097325,
	-0.881960235826,-0.883787631339,-0.885615282557,-0.887443188179,-0.889271346904,
	-0.891099757438,-0.892928418487,-0.894757328764,-0.896586486982,-0.898415891859,
	-0.900245542116,-0.902075436477,-0.903905573670,-0.905735952425,-0.907566571477,
	-0.909397429563,-0.911228525422,-0.913059857799,-0.914891425440,-0.916723227095,
	-0.918555261517,-0.920387527462,-0.922220023689,-0.924052748961,-0.925885702042,
	-0.927718881701,-0.929552286709,-0.931385915841,-0.933219767873,-0.935053841586,
	-0.936888135763,-0.938722649190,-0.940557380657,-0.942392328954,-0.944227492876,
	-0.946062871222,-0.947898462792,-0.949734266388,-0.951570280817,-0.953406504888,
	-0.955242937412,-0.957079577204,-0.958916423080,-0.960753473861,-0.962590728368,
	-0.964428185428,-0.966265843867,-0.968103702516,-0.969941760208,-0.971780015779,
	-0.973618468068,-0.975457115914,-0.977295958161,-0.979134993655,-0.980974221244,
	-0.982813639780,-0.984653248116,-0.986493045108,-0.988333029613,-0.990173200493,
	-0.992013556610,-0.993854096831,-0.995694820023,-0.997535725057,-0.999376810805,
	-1.001218076142,-1.003059519945,-1.004901141094,-1.006742938470,-1.008584910958,
	-1.010427057445,-1.012269376817,-1.014111867968,-1.015954529788,-1.017797361174,
	-1.019640361022,-1.021483528232,-1.023326861705,-1.025170360346,-1.027014023059,
	-1.028857848752,-1.030701836336,-1.032545984722,-1.034390292824,-1.036234759557,
	-1.038079383840,-1.039924164592,-1.041769100735,-1.043614191193,-1.045459434891,
	-1.047304830756,-1.049150377719,-1.050996074710,-1.052841920661,-1.054687914509,
	-1.056534055190,-1.058380341641,-1.060226772804,-1.062073347620,-1.063920065034,
	-1.065766923989,-1.067613923434,-1.069461062318,-1.071308339590,-1.073155754203,
	-1.075003305111,-1.076850991269,-1.078698811635,-1.080546765165,-1.082394850822,
	-1.084243067566,-1.086087121645,-1.087914852651,-1.089716166370,-1.091488316368,
	-1.093231071156,-1.094945416614,-1.096632944453,-1.098295515316,-1.099935063790,
	-1.101553485292,-1.103152572756,-1.104733984305,-1.106299230249,-1.107849671956,
	-1.109386527771,-1.110910882846,-1.112423700832,-1.113925836168,-1.115418046155,
	-1.116901002344,-1.118375301013,-1.119841472608,-1.121299990135,-1.122751276557,
	-1.124195711254,-1.125633635626,-1.127065357953,-1.128491157583,-1.129911288530,
	-1.131325982580,-1.132735451953,-1.134139891598,-1.135539481169,-1.136934386723,
	-1.138324762193,-1.139710750663,-1.141092485471,-1.142470091175,-1.143843684387,
	-1.145213374519,-1.146579264421,-1.147941450960,-1.149300025521,-1.150655074457,
	-1.152006679491,-1.153354918073,-1.154699863700,-1.156041586209,-1.157380152035,
	-1.158715624448,-1.160048063769,-1.161377527565,-1.162704070827,-1.164027746136,
	-1.165348603809,-1.166666692040,-1.167982057027,-1.169294743087,-1.170604792764,
	-1.171912246933,-1.173217144890,-1.174519524439,-1.175819421973,-1.177116872549,
	-1.178411909956,-1.179704566783,-1.180994874480,-1.182282863411,-1.183568562912,
	-1.184852001342,-1.186133206125,-1.187412203799,-1.188689020054,-1.189963679777,
	-1.191236207082,-1.192506625351,-1.193774957262,-1.195041224824,-1.196305449404,
	-1.197567651756,-1.198827852047,-1.200086069881,-1.201342324326,-1.202596633931,
	-1.203849016752,-1.205099490371,-1.206348071912,-1.207594778064,-1.208839625096,
	-1.210082628873,-1.211323804873,-1.212563168199,-1.213800733599,-1.215036515474,
	-1.216270527892,-1.217502784603,-1.218733299049,-1.219962084374,-1.221189153437,
	-1.222414518821,-1.223638192842,-1.224860187562,-1.226080514793,-1.227299186108,
	-1.228516212851,-1.229731606141,-1.230945376882,-1.232157535771,-1.233368093302,
	-1.234577059774,-1.235784445300,-1.236990259808,-1.238194513051,-1.239397214609,
	-1.240598373901,-1.241798000180,-1.242996102548,-1.244192689954,-1.245387771202,
	-1.246581354954,-1.247773449735,-1.248964063935,-1.250153205817,-1.251340883517,
	-1.252527105050,-1.253711878310,-1.254895211078,-1.256077111024,-1.257257585707,
	-1.258436642580,-1.259614288995,-1.260790532203,-1.261965379358,-1.263138837518,
	-1.264310913649,-1.265481614629,-1.266650947245,-1.267818918202,-1.268985534121,
	-1.270150801540,-1.271314726919,-1.272477316643,-1.273638577018,-1.274798514281,
	-1.275957134593,-1.277114444049,-1.278270448672,-1.279425154422,-1.280578567192,
	-1.281730692810,-1.282881537045,-1.284031105603,-1.285179404131,-1.286326438217,
	-1.287472213395,-1.288616735141,-1.289760008876,-1.290902039969,-1.292042833738,
	-1.293182395446,-1.294320730310,-1.295457843496,-1.296593740122,-1.297728425259,
	-1.298861903933,-1.299994181122,-1.301125261761,-1.302255150744,-1.303383852917,
	-1.304511373089,-1.305637716025,-1.306762886449,-1.307886889049,-1.309009728469,
	-1.310131409319,-1.311251936169,-1.312371313552,-1.313489545965,-1.314606637870,
	-1.315722593693,-1.316837417826,-1.317951114626,-1.319063688418,-1.320175143492,
	-1.321285484107,-1.322394714490,-1.323502838837,-1.324609861312,-1.325715786049,
	-1.326820617151,-1.327924358694,-1.329027014722,-1.330128589252,-1.331229086272,
	-1.332328509743,-1.333426863596,-1.334524151738,-1.335620378047,-1.336715546375,
	-1.337809660549,-1.338902724370,-1.339994741611,-1.341085716025,-1.342175651335,
	-1.343264551242,-1.344352419424,-1.345439259534,-1.346525075199,-1.347609870028,
	-1.348693647603,-1.349776411484,-1.350858165209,-1.351938912294,-1.353018656234,
	-1.354097400499,-1.355175148542,-1.356251903791,-1.357327669656,-1.358402449523,
	-1.359476246761,-1.360549064717,-1.361620906717,-1.362691776069,-1.363761676060,
	-1.364830609958,-1.365898581012,-1.366965592452,-1.368031647487,-1.369096749312,
	-1.370160901098,-1.371224106002,-1.372286367159,-1.373347687691,-1.374408070696,
	-1.375467519261,-1.376526036449,-1.377583625311,-1.378640288878,-1.379696030165,
	-1.380750852168,-1.381804757870,-1.382857750235,-1.383909832211,-1.384961006729,
	-1.386011276705,-1.387060645040,-1.388109114616,-1.389156688301,-1.390203368948,
	-1.391249159395,-1.392294062461,-1.393338080955,-1.394381217666,-1.395423475371,
	-1.396464856832,-1.397505364795,-1.398545001992,-1.399583771140,-1.400621674943,
	-1.401658716089,-1.402694897253,-1.403730221094,-1.404764690260,-1.405798307383,
	-1.406831075082,-1.407862995962,-1.408894072614,-1.409924307616,-1.410953703534,
	-1.411982262918,-1.413009988306,-1.414036882224,-1.415062947184,-1.416088185685,
	-1.417112600213,-1.418136193242,-1.419158967232,-1.420180924633,-1.421202067879,
	-1.422222399395,-1.423241921592,-1.424260636868,-1.425278547610,-1.426295656194,
	-1.427311964981,-1.428327476323,-1.429342192559,-1.430356116016,-1.431369249009,
	-1.432381593843,-1.433393152809,-1.434403928190,-1.435413922253,-1.436423137259,
	-1.437431575453,-1.438439239072,-1.439446130341,-1.440452251472,-1.441457604670,
	-1.442462192125,-1.443466016019,-1.444469078523,-1.445471381795,-1.446472927984,
	-1.447473719230,-1.448473757660,-1.449473045391,-1.450471584531,-1.451469377176,
	-1.452466425412,-1.453462731317,-1.454458296956,-1.455453124385,-1.456447215651,
	-1.457440572789,-1.458433197825,-1.459425092777,-1.460416259650,-1.461406700442,
	-1.462396417140,-1.463385411721,-1.464373686154,-1.465361242396,-1.466348082397,
	-1.467334208097,-1.468319621425,-1.469304324304,-1.470288318644,-1.471271606349,
	-1.472254189311,-1.473236069416,-1.474217248538,-1.475197728543,-1.476177511290,
	-1.477156598627,-1.478134992393,-1.479112694420,-1.480089706529,-1.481066030534,
	-1.482041668240,-1.483016621443,-1.483990891931,-1.484964481483,-1.485937391870,
	-1.486909624854,-1.487881182188,-1.488852065620,-1.489822276885,-1.490791817713,
	-1.491760689826,-1.492728894935,-1.493696434746,-1.494663310955,-1.495629525251,
	-1.496595079314,-1.497559974818,-1.498524213426,-1.499487796797,-1.500450726579,
	-1.501413004413,-1.502374631934,-1.503335610767,-1.504295942531,-1.505255628837,
	-1.506214671287,-1.507173071478,-1.508130830998,-1.509087951427,-1.510044434339,
	-1.511000281299,-1.511955493867,-1.512910073595,-1.513864022025,-1.514817340695,
	-1.515770031134,-1.516722094866,-1.517673533406,-1.518624348262,-1.519574540935,
	-1.520524112920,-1.521473065705,-1.522421400769,-1.523369119587,-1.524316223625,
	-1.525262714343,-1.526208593194,-1.527153861625,-1.528098521075,-1.529042572978,
	-1.529986018759,-1.530928859838,-1.531871097628,-1.532812733537,-1.533753768963,
	-1.534694205302,-1.535634043938,-1.536573286255,-1.537511933625,-1.538449987416,
	-1.539387448991,-1.540324319704,-1.541260600905,-1.542196293936,-1.543131400135,
	-1.544065920830,-1.544999857348,-1.545933211005,-1.546865983115,-1.547798174983,
	-1.548729787909,-1.549660823187,-1.550591282105,-1.551521165946,-1.552450475985,
	-1.553379213494,-1.554307379736,-1.555234975970,-1.556162003449,-1.557088463420,
	-1.558014357125,-1.558939685800,-1.559864450674,-1.560788652971,-1.561712293911,
	-1.562635374707,-1.563557896565,-1.564479860689,-1.565401268274,-1.566322120512,
	-1.567242418589,-1.568162163683,-1.569081356971,-1.569999999620,-1.570918092796,
	-1.571835637657,-1.572752635356,-1.573669087041,-1.574584993854,-1.575500356934,
	-1.576415177413,-1.577329456418,-1.578243195070,-1.579156394486,-1.580069055779,
	-1.580981180054,-1.581892768414,-1.582803821954,-1.583714341766,-1.584624328938,
	-1.585533784549,-1.586442709677,-1.587351105394,-1.588258972765,-1.589166312854,
	-1.590073126716,-1.590979415404,-1.591885179966,-1.592790421444,-1.593695140875,
	-1.594599339293,-1.595503017727,-1.596406177198,-1.597308818728,-1.598210943329,
	-1.599112552011,-1.600013645780,-1.600914225636,-1.601814292574,-1.602713847586,
	-1.603612891659,-1.604511425775,-1.605409450912,-1.606306968042,-1.607203978136,
	-1.608100482156,-1.608996481063,-1.609891975814,-1.610786967358,-1.611681456643,
	-1.612575444611,-1.613468932200,-1.614361920345,-1.615254409976,-1.616146402016,
	-1.617037897388,-1.617928897009,-1.618819401791,-1.619709412643,-1.620598930470,
	-1.621487956171,-1.622376490642,-1.623264534776,-1.624152089461,-1.625039155581,
	-1.625925734015,-1.626811825639,-1.627697431325,-1.628582551941,-1.629467188350,
	-1.630351341413,-1.631235011985,-1.632118200919,-1.633000909061,-1.633883137258,
	-1.634764886347,-1.635646157168,-1.636526950551,-1.637407267325,-1.638287108316,
	-1.639166474345,-1.640045366229,-1.640923784781,-1.641801730812,-1.642679205128,
	-1.643556208531,-1.644432741820,-1.645308805790,-1.646184401233,-1.647059528935,
	-1.647934189682,-1.648808384254,-1.649682113427,-1.650555377976,-1.651428178669,
	-1.652300516274,-1.653172391552,-1.654043805263,-1.654914758163,-1.655785251003,
	-1.656655284532,-1.657524859496,-1.658393976636,-1.659262636691,-1.660130840395,
	-1.660998588480,-1.661865881674,-1.662732720702,-1.663599106284,-1.664465039140,
	-1.665330519983,-1.666195549526,-1.667060128475,-1.667924257537,-1.668787937411,
	-1.669651168797,-1.670513952390,-1.671376288880,-1.672238178957,-1.673099623306,
	-1.673960622608,-1.674821177544,-1.675681288788,-1.676540957012,-1.677400182888,
	-1.678258967079,-1.679117310251,-1.679975213062,-1.680832676170,-1.681689700229,
	-1.682546285889,-1.683402433797,-1.684258144600,-1.685113418938,-1.685968257450,
	-1.686822660772,-1.687676629535,-1.688530164371,-1.689383265905,-1.690235934761,
	-1.691088171561,-1.691939976920,-1.692791351456,-1.693642295779,-1.694492810499,
	-1.695342896222,-1.696192553550,-1.697041783086,-1.697890585425,-1.698738961164,
	-1.699586910893,-1.700434435202,-1.701281534678,-1.702128209903,-1.702974461458,
	-1.703820289922,-1.704665695869,-1.705510679871,-1.706355242499,-1.707199384320,
	-1.708043105897,-1.708886407791,-1.709729290563,-1.710571754767,-1.711413800958,
	-1.712255429686,-1.713096641498,-1.713937436941,-1.714777816557,-1.715617780887,
	-1.716457330468,-1.717296465834,-1.718135187518,-1.718973496050,-1.719811391958,
	-1.720648875765,-1.721485947993,-1.722322609163,-1.723158859791,-1.723994700391,
	-1.724830131476,-1.725665153554,-1.726499767133,-1.727333972717,-1.728167770808,
	-1.729001161905,-1.729834146505,-1.730666725104,-1.731498898192,-1.732330666260,
	-1.733162029794,-1.733992989280,-1.734823545200,-1.735653698033,-1.736483448259,
	-1.737312796350,-1.738141742782,-1.738970288023,-1.739798432542,-1.740626176805,
	-1.741453521276,-1.742280466415,-1.743107012681,-1.743933160530,-1.744758910418,
	-1.745584262795,-1.746409218111,-1.747233776814,-1.748057939349,-1.748881706158,
	-1.749705077682,-1.750528054359,-1.751350636625,-1.752172824914,-1.752994619658,
	-1.753816021286,-1.754637030225,-1.755457646901,-1.756277871735,-1.757097705149,
	-1.757917147560,-1.758736199386,-1.759554861041,-1.760373132935,-1.761191015480,
	-1.762008509083,-1.762825614149,-1.763642331082,-1.764458660283,-1.765274602152,
	-1.766090157085,-1.766905325477,-1.767720107722,-1.768534504211,-1.769348515331,
	-1.770162141471,-1.770975383014,-1.771788240343,-1.772600713840,-1.773412803882,
	-1.774224510846,-1.775035835106,-1.775846777036,-1.776657337005,-1.777467515383,
	-1.778277312535,-1.779086728827,-1.779895764620,-1.780704420276,-1.781512696153,
	-1.782320592608,-1.783128109996,-1.783935248669,-1.784742008978,-1.785548391273,
	-1.786354395899,-1.787160023203,-1.787965273528,-1.788770147215,-1.789574644602,
	-1.790378766029,-1.791182511830,-1.791985882339,-1.792788877888,-1.793591498807,
	-1.794393745424,-1.795195618066,-1.795997117057,-1.796798242719,-1.797598995374,
	-1.798399375340,-1.799199382934,-1.799999018472,-1.800798282268,-1.801597174632,
	-1.802395695876,-1.803193846306,-1.803991626230,-1.804789035951,-1.805586075774,
	-1.806382745998,-1.807179046923,-1.807974978846,-1.808770542064,-1.809565736870,
	-1.810360563556,-1.811155022414,-1.811949113731,-1.812742837795,-1.813536194892,
	-1.814329185304,-1.815121809315,-1.815914067203,-1.816705959249,-1.817497485727,
	-1.818288646915,-1.819079443085,-1.819869874508,-1.820659941457,-1.821449644197,
	-1.822238982998,-1.823027958123,-1.823816569837,-1.824604818401,-1.825392704075,
	-1.826180227119,-1.826967387789,-1.827754186340,-1.828540623027,-1.829326698101,
	-1.830112411814,-1.830897764414,-1.831682756148,-1.832467387262,-1.833251658001,
	-1.834035568607,-1.834819119321,-1.835602310382,-1.836385142029,-1.837167614498,
	-1.837949728024,-1.838731482840,-1.839512879177,-1.840293917266,-1.841074597335,
	-1.841854919612,-1.842634884321,-1.843414491688,-1.844193741935,-1.844972635282,
	-1.845751171949,-1.846529352154,-1.847307176114,-1.848084644044,-1.848861756156,
	-1.849638512664,-1.850414913778,-1.851190959706,-1.851966650657,-1.852741986836,
	-1.853516968448,-1.854291595697,-1.855065868784,-1.855839787910,-1.856613353273,
	-1.857386565071,-1.858159423499,-1.858931928753,-1.859704081025,-1.860475880508,
	-1.861247327391,-1.862018421863,-1.862789164112,-1.863559554324,-1.864329592683,
	-1.865099279373,-1.865868614576,-1.866637598472,-1.867406231240,-1.868174513057,
	-1.868942444101,-1.869710024547,-1.870477254566,-1.871244134333,-1.872010664017,
	-1.872776843789,-1.873542673816,-1.874308154266,-1.875073285303,-1.875838067091,
	-1.876602499794,-1.877366583574,-1.878130318589,-1.878893704999,-1.879656742961,
	-1.880419432632,-1.881181774166,-1.881943767716,-1.882705413436,-1.883466711475,
	-1.884227661984,-1.884988265111,-1.885748521002,-1.886508429804,-1.887267991661,
	-1.888027206715,-1.888786075110,-1.889544596985,-1.890302772481,-1.891060601734,
	-1.891818084882,-1.892575222060,-1.893332013403,-1.894088459044,-1.894844559114,
	-1.895600313744,-1.896355723064,-1.897110787201,-1.897865506282,-1.898619880433,
	-1.899373909778,-1.900127594441,-1.900880934543,-1.901633930205,-1.902386581547,
	-1.903138888686,-1.903890851741,-1.904642470827,-1.905393746058,-1.906144677548,
	-1.906895265409,-1.907645509753,-1.908395410689,-1.909144968327,-1.909894182773,
	-1.910643054134,-1.911391582516,-1.912139768022,-1.912887610755,-1.913635110818,
	-1.914382268310,-1.915129083330,-1.915875555979,-1.916621686351,-1.917367474544,
	-1.918112920652,-1.918858024768,-1.919602786986,-1.920347207397,-1.921091286091,
	-1.921835023157,-1.922578418683,-1.923321472756,-1.924064185462,-1.924806556885,
	-1.925548587110,-1.926290276218,-1.927031624292,-1.927772631410,-1.928513297653,
	-1.929253623098,-1.929993607822,-1.930733251902,-1.931472555412,-1.932211518425,
	-1.932950141014,-1.933688423252,-1.934426365208,-1.935163966951,-1.935901228550,
	-1.936638150073,-1.937374731585,-1.938110973152,-1.938846874838,-1.939582436705,
	-1.940317658816,-1.941052541232,-1.941787084012,-1.942521287216,-1.943255150901,
	-1.943988675123,-1.944721859940,-1.945454705405,-1.946187211571,-1.946919378493,
	-1.947651206221,-1.948382694806,-1.949113844298,-1.949844654744,-1.950575126194,
	-1.951305258693,-1.952035052286,-1.952764507019,-1.953493622935,-1.954222400077,
	-1.954950838486,-1.955678938202,-1.956406699266,-1.957134121715,-1.957861205589,
	-1.958587950922,-1.959314357751,-1.960040426111,-1.960766156035,-1.961491547557,
	-1.962216600707,-1.962941315517,-1.963665692016,-1.964389730234,-1.965113430198,
	-1.965836791936,-1.966559815473,-1.967282500835,-1.968004848046,-1.968726857128,
	-1.969448528105,-1.970169860998,-1.970890855827,-1.971611512612,-1.972331831370,
	-1.973051812121,-1.973771454880,-1.974490759663,-1.975209726485,-1.975928355361,
	-1.976646646303,-1.977364599323,-1.978082214433,-1.978799491643,-1.979516430963,
	-1.980233032400,-1.980949295963,-1.981665221658,-1.982380809492,-1.983096059468,
	-1.983810971592,-1.984525545867,-1.985239782294,-1.985953680875,-1.986667241612,
	-1.987380464503,-1.988093349547,-1.988805896742,-1.989518106087,-1.990229977575,
	-1.990941511204,-1.991652706967,-1.992363564859,-1.993074084872,-1.993784266997,
	-1.994494111227,-1.995203617552,-1.995912785960,-1.996621616441,-1.997330108982,
	-1.998038263570,-1.998746080191,-1.999453558831,-2.000160699474,-2.000867502104,
	-2.001573966702,-2.002280093253,-2.002985881736,-2.003691332131,-2.004396444420,
	-2.005101218579,-2.005805654588,-2.006509752422,-2.007213512060,-2.007916933475,
	-2.008620016643,-2.009322761538,-2.010025168133,-2.010727236400,-2.011428966311,
	-2.012130357836,-2.012831410946,-2.013532125610,-2.014232501797,-2.014932539473,
	-2.015632238606,-2.016331599162,-2.017030621106,-2.017729304404,-2.018427649018,
	-2.019125654913,-2.019823322049,-2.020520650390,-2.021217639895,-2.021914290525,
	-2.022610602239,-2.023306574996,-2.024002208753,-2.024697503469,-2.025392459098,
	-2.026087075597,-2.026781352920,-2.027475291023,-2.028168889858,-2.028862149378,
	-2.029555069535,-2.030247650280,-2.030939891564,-2.031631793337,-2.032323355548,
	-2.033014578146,-2.033705461078,-2.034396004291,-2.035086207731,-2.035776071345,
	-2.036465595076,-2.037154778871,-2.037843622671,-2.038532126420,-2.039220290060,
	-2.039908113532,-2.040595596778,-2.041282739738,-2.041969542350,-2.042656004554,
	-2.043342126288,-2.044027907489,-2.044713348094,-2.045398448040,-2.046083207261,
	-2.046767625693,-2.047451703269,-2.048135439923,-2.048818835588,-2.049501890197,
	-2.050184603680,-2.050866975968,-2.051549006993,-2.052230696683,-2.052912044967,
	-2.053593051774,-2.054273717032,-2.054954040667,-2.055634022606,-2.056313662775,
	-2.056992961099,-2.057671917503,-2.058350531910,-2.059028804244,-2.059706734428,
	-2.060384322384,-2.061061568034,-2.061738471298,-2.062415032096,-2.063091250349,
	-2.063767125975,-2.064442658894,-2.065117849022,-2.065792696278,-2.066467200578,
	-2.067141361839,-2.067815179975,-2.068488654902,-2.069161786535,-2.069834574787,
	-2.070507019572,-2.071179120802,-2.071850878389,-2.072522292246,-2.073193362283,
	-2.073864088410,-2.074534470538,-2.075204508576,-2.075874202433,-2.076543552016,
	-2.077212557235,-2.077881217995,-2.078549534204,-2.079217505768,-2.079885132592,
	-2.080552414581,-2.081219351640,-2.081885943673,-2.082552190582,-2.083218092273,
	-2.083883648645,-2.084548859602,-2.085213725045,-2.085878244874,-2.086542418991,
	-2.087206247294,-2.087869729684,-2.088532866058,-2.089195656316,-2.089858100355,
	-2.090520198072,-2.091181949365,-2.091843354129,-2.092504412261,-2.093165123656,
	-2.093825488209,-2.094485505814,-2.095145176366,-2.095804499757,-2.096463475881,
	-2.097122104630,-2.097780385896,-2.098438319571,-2.099095905546,-2.099753143712,
	-2.100410033959,-2.101066576176,-2.101722770254,-2.102378616080,-2.103034113544,
	-2.103689262533,-2.104344062935,-2.104998514637,-2.105652617526,-2.106306371487,
	-2.106959776407,-2.107612832171,-2.108265538664,-2.108917895771,-2.109569903376,
	-2.110221561361,-2.110872869612,-2.111523828010,-2.112174436438,-2.112824694778,
	-2.113474602912,-2.114124160721,-2.114773368086,-2.115422224887,-2.116070731005,
	-2.116718886319,-2.117366690708,-2.118014144051,-2.118661246228,-2.119307997115,
	-2.119954396591,-2.120600444534,-2.121246140820,-2.121891485325,-2.122536477927,
	-2.123181118501,-2.123825406923,-2.124469343068,-2.125112926811,-2.125756158026,
	-2.126399036588,-2.127041562370,-2.127683735246,-2.128325555089,-2.128967021772,
	-2.129608135167,-2.130248895147,-2.130889301583,-2.131529354346,-2.132169053309,
	-2.132808398341,-2.133447389314,-2.134086026097,-2.134724308560,-2.135362236574,
	-2.135999810007,-2.136637028728,-2.137273892606,-2.137910401509,-2.138546555305,
	-2.139182353863,-2.139817797049,-2.140452884731,-2.141087616776,-2.141721993050,
	-2.142356013420,-2.142989677752,-2.143622985912,-2.144255937765,-2.144888533176,
	-2.145520772011,-2.146152654134,-2.146784179410,-2.147415347703,-2.148046158877,
	-2.148676612796,-2.149306709323,-2.149936448321,-2.150565829654,-2.151194853184,
	-2.151823518774,-2.152451826286,-2.153079775581,-2.153707366523,-2.154334598973,
	-2.154961472791,-2.155587987839,-2.156214143978,-2.156839941070,-2.157465378973,
	-2.158090457549,-2.158715176658,-2.159339536160,-2.159963535914,-2.160587175780,
	-2.161210455617,-2.161833375285,-2.162455934642,-2.163078133547,-2.163699971858,
	-2.164321449435,-2.164942566136,-2.165563321818,-2.166183716339,-2.166803749557,
	-2.167423421330,-2.168042731515,-2.168661679970,-2.169280266550,-2.169898491115,
	-2.170516353519,-2.171133853620,-2.171750991275,-2.172367766339,-2.172984178669,
	-2.173600228121,-2.174215914551,-2.174831237816,-2.175446197769,-2.176060794268,
	-2.176675027168,-2.177288896324,-2.177902401590,-2.178515542824,-2.179128319879,
	-2.179740732610,-2.180352780873,-2.180964464521,-2.181575783410,-2.182186737395,
	-2.182797326329,-2.183407550067,-2.184017408463,-2.184626901372,-2.185236028647,
	-2.185844790144,-2.186453185715,-2.187061215215,-2.187668878497,-2.188276175415,
	-2.188883105824,-2.189489669577,-2.190095866527,-2.190701696528,-2.191307159433,
	-2.191912255097,-2.192516983372,-2.193121344112,-2.193725337170,-2.194328962400,
	-2.194932219655,-2.195535108789,-2.196137629654,-2.196739782104,-2.197341565993,
	-2.197942981172,-2.198544027497,-2.199144704819,-2.199745012992,-2.200344951870,
	-2.200944521305,-2.201543721152,-2.202142551262,-2.202741011489,-2.203339101688,
	-2.203936821710,-2.204534171409,-2.205131150639,-2.205727759252,-2.206323997103,
	-2.206919864045,-2.207515359931,-2.208110484615,-2.208705237950,-2.209299619790,
	-2.209893629988,-2.210487268399,-2.211080534875,-2.211673429272,-2.212265951442,
	-2.212858101240,-2.213449878520,-2.214041283135,-2.214632314940,-2.215222973790,
	-2.215813259538,-2.216403172039,-2.216992711147,-2.217581876717,-2.218170668604,
	-2.218759086662,-2.219347130747,-2.219934800712,-2.220522096414,-2.221109017708,
	-2.221695564448,-2.222281736491,-2.222867533692,-2.223452955905,-2.224038002989,
	-2.224622674797,-2.225206971186,-2.225790892013,-2.226374437133,-2.226957606403,
	-2.227540399680,-2.228122816821,-2.228704857682,-2.229286522120,-2.229867809992,
	-2.230448721157,-2.231029255471,-2.231609412792,-2.232189192978,-2.232768595886,
	-2.233347621376,-2.233926269306,-2.234504539533,-2.235082431918,-2.235659946318,
	-2.236237082593,-2.236813840602,-2.237390220204,-2.237966221260,-2.238541843630,
	-2.239117087172,-2.239691951748,-2.240266437219,-2.240840543444,-2.241414270286,
	-2.241987617604,-2.242560585261,-2.243133173118,-2.243705381037,-2.244277208880,
	-2.244848656509,-2.245419723788,-2.245990410578,-2.246560716743,-2.247130642146,
	-2.247700186651,-2.248269350122,-2.248838132422,-2.249406533416,-2.249974552969,
	-2.250542190945,-2.251109447209,-2.251676321628,-2.252242814066,-2.252808924390,
	-2.253374652466,-2.253939998160,-2.254504961339,-2.255069541870,-2.255633739622,
	-2.256197554460,-2.256760986255,-2.257324034873,-2.257886700183,-2.258448982054,
	-2.259010880357,-2.259572394959,-2.260133525731,-2.260694272543,-2.261254635266,
	-2.261814613771,-2.262374207928,-2.262933417610,-2.263492242688,-2.264050683034,
	-2.264608738520,-2.265166409021,-2.265723694408,-2.266280594556,-2.266837109338,
	-2.267393238629,-2.267948982304,-2.268504340237,-2.269059312304,-2.269613898380,
	-2.270168098342,-2.270721912066,-2.271275339430,-2.271828380309,-2.272381034583,
	-2.272933302129,-2.273485182825,-2.274036676551,-2.274587783185,-2.275138502608,
	-2.275688834698,-2.276238779337,-2.276788336406,-2.277337505785,-2.277886287357,
	-2.278434681003,-2.278982686606,-2.279530304049,-2.280077533215,-2.280624373988,
	-2.281170826252,-2.281716889892,-2.282262564793,-2.282807850841,-2.283352747921,
	-2.283897255919,-2.284441374724,-2.284985104221
	}
};

double always_inline c03_stage2clip(double x) {
    double f = fabs(x);
    f = f * c03_stage2_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = c03_stage2_table.data[0];
    } else if (i >= c03_stage2_table.size-1) {
        f = c03_stage2_table.data[c03_stage2_table.size-1];
    } else {
        f -= i;
        f = c03_stage2_table.data[i]*(1-f) + c03_stage2_table.data[i+1]*f;
    }
    return copysign(f, x);
}


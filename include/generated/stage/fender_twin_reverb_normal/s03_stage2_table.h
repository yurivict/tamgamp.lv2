
// s03_stage2_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  13.736878
 // --table_op  1.000000

struct tables03_stage2 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables03_stage2_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables03_stage2&() const { return *(tables03_stage2*)this; }
};

static tables03_stage2_imp<2048> s03_stage2_table __rt_data = {
	0,-17.5896,204.7,2048, {
	0.000000000000,-0.011605507403,-0.023209942786,-0.034813302305,-0.046415582133,
	-0.058016778454,-0.069616887471,-0.081215905400,-0.092813828471,-0.104410652932,
	-0.116006375044,-0.127600991081,-0.139194497336,-0.150786890113,-0.162378165733,
	-0.173968320530,-0.185557350855,-0.197145253071,-0.208732023557,-0.220317658706,
	-0.231902154927,-0.243485508641,-0.255067716286,-0.266648774312,-0.278228679185,
	-0.289807427385,-0.301385015406,-0.312961439757,-0.324536696960,-0.336110783552,
	-0.347683696084,-0.359255431121,-0.370825985243,-0.382395355042,-0.393963537126,
	-0.405530528117,-0.417096324649,-0.428660923372,-0.440224320949,-0.451786514056,
	-0.463347499385,-0.474907273639,-0.486465833538,-0.498023175812,-0.509579297209,
	-0.521134194486,-0.532687864417,-0.544240303788,-0.555791509400,-0.567341478065,
	-0.578890206611,-0.590437691878,-0.601983930720,-0.613528920005,-0.625072656612,
	-0.636615137435,-0.648156359383,-0.659696319375,-0.671235014344,-0.682772441238,
	-0.694308597016,-0.705843478652,-0.717377083132,-0.728909407454,-0.740440448631,
	-0.751970203688,-0.763498669664,-0.775025843608,-0.786551722586,-0.798076303674,
	-0.809599583961,-0.821121560551,-0.832642230557,-0.844161591108,-0.855679639345,
	-0.867196372421,-0.878711787501,-0.890225881764,-0.901738652402,-0.913250096617,
	-0.924760211626,-0.936268994657,-0.947776442951,-0.959282553762,-0.970787324356,
	-0.982290752011,-0.993792834016,-1.005293567675,-1.016792950304,-1.028290979228,
	-1.039787651788,-1.051282965335,-1.062776917233,-1.074269504858,-1.085760725598,
	-1.097250576852,-1.108739056032,-1.120226160564,-1.131711887882,-1.143196235434,
	-1.154679200680,-1.166160781092,-1.177640974152,-1.189119777358,-1.200597188214,
	-1.212073204241,-1.223547822968,-1.235021041938,-1.246492858704,-1.257963270833,
	-1.269432275900,-1.280899871495,-1.292366055217,-1.303830824679,-1.315294177504,
	-1.326756111325,-1.338216623790,-1.349675712555,-1.361133375289,-1.372589609673,
	-1.384044413397,-1.395497784164,-1.406949719689,-1.418400217696,-1.429849275922,
	-1.441296892115,-1.452743064032,-1.464187789443,-1.475631066130,-1.487072891885,
	-1.498513264509,-1.509952181818,-1.521389641635,-1.532825641797,-1.544260180150,
	-1.555693254552,-1.567124862871,-1.578555002987,-1.589983672789,-1.601410870179,
	-1.612836593067,-1.624260839376,-1.635683607039,-1.647104894000,-1.658524698213,
	-1.669943017642,-1.681359850264,-1.692775194063,-1.704189047037,-1.715601407192,
	-1.727012272546,-1.738421641126,-1.749829510972,-1.761235880131,-1.772640746663,
	-1.784044108636,-1.795445964131,-1.806846311238,-1.818245148056,-1.829642472697,
	-1.841038283280,-1.852432577936,-1.863825354807,-1.875216612043,-1.886606347806,
	-1.897994560266,-1.909381247605,-1.920766408014,-1.932150039694,-1.943532140857,
	-1.954912709723,-1.966291744523,-1.977669243499,-1.989045204901,-2.000419626989,
	-2.011792508034,-2.023163846317,-2.034533640126,-2.045901887762,-2.057268587533,
	-2.068633737760,-2.079997336769,-2.091359382901,-2.102719874501,-2.114078809929,
	-2.125436187550,-2.136792005742,-2.148146262889,-2.159498957388,-2.170850087644,
	-2.182199652070,-2.193547649090,-2.204894077138,-2.216238934655,-2.227582220093,
	-2.238923931914,-2.250264068587,-2.261602628592,-2.272939610418,-2.284275012562,
	-2.295608833532,-2.306941071843,-2.318271726021,-2.329600794600,-2.340928276124,
	-2.352254169146,-2.363578472225,-2.374901183934,-2.386222302852,-2.397541827566,
	-2.408859756675,-2.420176088784,-2.431490822509,-2.442803956473,-2.454115489309,
	-2.465425419658,-2.476733746172,-2.488040467508,-2.499345582335,-2.510649089329,
	-2.521950987176,-2.533251274568,-2.544549950209,-2.555847012809,-2.567142461088,
	-2.578436293774,-2.589728509604,-2.601019107323,-2.612308085684,-2.623595443450,
	-2.634881179391,-2.646165292286,-2.657447780923,-2.668728644097,-2.680007880612,
	-2.691285489281,-2.702561468923,-2.713835818369,-2.725108536455,-2.736379622027,
	-2.747649073937,-2.758916891049,-2.770183072231,-2.781447616363,-2.792710522329,
	-2.803971789025,-2.815231415352,-2.826489400221,-2.837745742550,-2.849000441265,
	-2.860253495301,-2.871504903601,-2.882754665113,-2.894002778796,-2.905249243617,
	-2.916494058548,-2.927737222572,-2.938978734677,-2.950218593862,-2.961456799130,
	-2.972693349496,-2.983928243978,-2.995161481605,-3.006393061414,-3.017622982446,
	-3.028851243754,-3.040077844397,-3.051302783439,-3.062526059955,-3.073747673027,
	-3.084967621743,-3.096185905200,-3.107402522500,-3.118617472757,-3.129830755087,
	-3.141042368618,-3.152252312482,-3.163460585821,-3.174667187783,-3.185872117523,
	-3.197075374203,-3.208276956994,-3.219476865074,-3.230675097625,-3.241871653842,
	-3.253066532921,-3.264259734069,-3.275451256500,-3.286641099433,-3.297829262096,
	-3.309015743724,-3.320200543558,-3.331383660846,-3.342565094844,-3.353744844814,
	-3.364922910027,-3.376099289758,-3.387273983291,-3.398446989916,-3.409618308930,
	-3.420787939637,-3.431955881348,-3.443122133381,-3.454286695060,-3.465449565716,
	-3.476610744687,-3.487770231319,-3.498928024962,-3.510084124974,-3.521238530720,
	-3.532391241572,-3.543542256908,-3.554691576111,-3.565839198575,-3.576985123695,
	-3.588129350877,-3.599271879531,-3.610412709075,-3.621551838932,-3.632689268533,
	-3.643824997315,-3.654959024720,-3.666091350198,-3.677221973205,-3.688350893203,
	-3.699478109661,-3.710603622053,-3.721727429861,-3.732849532572,-3.743969929680,
	-3.755088620685,-3.766205605093,-3.777320882416,-3.788434452173,-3.799546313887,
	-3.810656467091,-3.821764911321,-3.832871646120,-3.843976671037,-3.855079985626,
	-3.866181589450,-3.877281482074,-3.888379663073,-3.899476132025,-3.910570888515,
	-3.921663932135,-3.932755262480,-3.943844879154,-3.954932781765,-3.966018969927,
	-3.977103443261,-3.988186201394,-3.999267243955,-4.010346570584,-4.021424180924,
	-4.032500074623,-4.043574251336,-4.054646710724,-4.065717452453,-4.076786476195,
	-4.087853781627,-4.098919368432,-4.109983236298,-4.121045384920,-4.132105813997,
	-4.143164523235,-4.154221512345,-4.165276781041,-4.176330329047,-4.187382156090,
	-4.198432261901,-4.209480646219,-4.220527308787,-4.231572249355,-4.242615467675,
	-4.253656963508,-4.264696736618,-4.275734786775,-4.286771113754,-4.297805717337,
	-4.308838597308,-4.319869753460,-4.330899185587,-4.341926893492,-4.352952876981,
	-4.363977135865,-4.374999669962,-4.386020479094,-4.397039563087,-4.408056921773,
	-4.419072554990,-4.430086462580,-4.441098644389,-4.452109100271,-4.463117830082,
	-4.474124833684,-4.485130110944,-4.496133661734,-4.507135485931,-4.518135583416,
	-4.529133954077,-4.540130597804,-4.551125514493,-4.562118704047,-4.573110166370,
	-4.584099901372,-4.595087908970,-4.606074189083,-4.617058741637,-4.628041566559,
	-4.639022663785,-4.650002033254,-4.660979674908,-4.671955588695,-4.682929774569,
	-4.693902232486,-4.704872962408,-4.715841964302,-4.726809238138,-4.737774783891,
	-4.748738601541,-4.759700691073,-4.770661052476,-4.781619685742,-4.792576590868,
	-4.803531767858,-4.814485216717,-4.825436937456,-4.836386930090,-4.847335194639,
	-4.858281731125,-4.869226539578,-4.880169620029,-4.891110972515,-4.902050597076,
	-4.912988493758,-4.923924662609,-4.934859103684,-4.945791817039,-4.956722802736,
	-4.967652060841,-4.978579591423,-4.989505394558,-5.000429470322,-5.011351818798,
	-5.022272440072,-5.033191334234,-5.044108501379,-5.055023941604,-5.065937655012,
	-5.076849641708,-5.087759901804,-5.098668435411,-5.109575242650,-5.120480323640,
	-5.131383678509,-5.142285307384,-5.153185210400,-5.164083387694,-5.174979839406,
	-5.185874565681,-5.196767566667,-5.207658842517,-5.218548393386,-5.229436219434,
	-5.240322320824,-5.251206697723,-5.262089350303,-5.272970278736,-5.283849483201,
	-5.294726963879,-5.305602720955,-5.316476754619,-5.327348619364,-5.338204904352,
	-5.349049831135,-5.359886438408,-5.370715947797,-5.381539082253,-5.392356335545,
	-5.403168072987,-5.413974579207,-5.424776084181,-5.435572778828,-5.446364824996,
	-5.457152362197,-5.467935512343,-5.478714383180,-5.489489070855,-5.500259661872,
	-5.511026234614,-5.521788860553,-5.532547605214,-5.543302528970,-5.554053687687,
	-5.564801133266,-5.575544914097,-5.586285075445,-5.597021659771,-5.607754707023,
	-5.618484254872,-5.629210338927,-5.639932992921,-5.650652248869,-5.661368137217,
	-5.672080686967,-5.682789925790,-5.693495880127,-5.704198575280,-5.714898035495,
	-5.725594284035,-5.736287343244,-5.746977234612,-5.757663978828,-5.768347595829,
	-5.779028104847,-5.789705524452,-5.800379872590,-5.811051166619,-5.821719423340,
	-5.832384659028,-5.843046889463,-5.853706129953,-5.864362395357,-5.875015700111,
	-5.885666058246,-5.896313483411,-5.906957988885,-5.917599587602,-5.928238292159,
	-5.938874114837,-5.949507067612,-5.960137162169,-5.970764409915,-5.981388821989,
	-5.992010409273,-6.002629182406,-6.013245151790,-6.023858327598,-6.034468719789,
	-6.045076338111,-6.055681192107,-6.066283291132,-6.076882644348,-6.087479260740,
	-6.098073149118,-6.108664318124,-6.119252776236,-6.129838531779,-6.140421592924,
	-6.151001967696,-6.161579663977,-6.172154689516,-6.182727051924,-6.193296758688,
	-6.203863817168,-6.214428234603,-6.224990018116,-6.235549174718,-6.246105711305,
	-6.256659634672,-6.267210951505,-6.277759668391,-6.288305791821,-6.298849328188,
	-6.309390283794,-6.319928664848,-6.330464477475,-6.340997727713,-6.351528421517,
	-6.362056564760,-6.372582163239,-6.383105222671,-6.393625748701,-6.404143746898,
	-6.414659222764,-6.425172181728,-6.435682629152,-6.446190570334,-6.456696010505,
	-6.467198954835,-6.477699408432,-6.488197376344,-6.498692863559,-6.509185875010,
	-6.519676415574,-6.530164490070,-6.540650103268,-6.551133259883,-6.561613964579,
	-6.572092221970,-6.582568036623,-6.593041413054,-6.603512355733,-6.613980869087,
	-6.624446957494,-6.634910625289,-6.645371876766,-6.655830716174,-6.666287147723,
	-6.676741175581,-6.687192803875,-6.697642036695,-6.708088878093,-6.718533332082,
	-6.728975402639,-6.739415093705,-6.749852409184,-6.760287352948,-6.770719928833,
	-6.781150140642,-6.791577992145,-6.802003487081,-6.812426629154,-6.822847422041,
	-6.833265869385,-6.843681974802,-6.854095741876,-6.864507174163,-6.874916275190,
	-6.885323048458,-6.895727497438,-6.906129625575,-6.916529436287,-6.926926932966,
	-6.937322118978,-6.947714997665,-6.958105572343,-6.968493846303,-6.978879822812,
	-6.989263505115,-6.999644896432,-7.010023999960,-7.020400818873,-7.030775356325,
	-7.041147615446,-7.051517599345,-7.061885311108,-7.072250753804,-7.082613930477,
	-7.092974844154,-7.103333497840,-7.113689894521,-7.124044037163,-7.134395928714,
	-7.144745572101,-7.155092970234,-7.165438126005,-7.175781042287,-7.186121721934,
	-7.196460167784,-7.206796382658,-7.217130369359,-7.227462130672,-7.237791669367,
	-7.248118988198,-7.258444089900,-7.268766977194,-7.279087652786,-7.289406119364,
	-7.299722379603,-7.310036436160,-7.320348291680,-7.330657948791,-7.340965410106,
	-7.351270678227,-7.361573755737,-7.371874645209,-7.382173349199,-7.392469870250,
	-7.402764210893,-7.413056373644,-7.423346361005,-7.433634175468,-7.443919819508,
	-7.454203295590,-7.464484606165,-7.474763753673,-7.485040740538,-7.495315569177,
	-7.505588241991,-7.515858761370,-7.526127129691,-7.536393349323,-7.546657422620,
	-7.556919351924,-7.567179139569,-7.577436787875,-7.587692299152,-7.597945675699,
	-7.608196919803,-7.618446033742,-7.628693019782,-7.638937880179,-7.649180617178,
	-7.659421233016,-7.669659729915,-7.679896110092,-7.690130375751,-7.700362529087,
	-7.710592572285,-7.720820507519,-7.731046336956,-7.741270062751,-7.751491687051,
	-7.761711211993,-7.771928639705,-7.782143972305,-7.792357211903,-7.802568360600,
	-7.812777420485,-7.822984393643,-7.833189282147,-7.843392088062,-7.853592813444,
	-7.863791460341,-7.873988030792,-7.884182526828,-7.894374950471,-7.904565303736,
	-7.914753588628,-7.924939807145,-7.935123961276,-7.945306053004,-7.955486084301,
	-7.965664057133,-7.975839973459,-7.986013835228,-7.996185644382,-8.006355402857,
	-8.016523112578,-8.026688775466,-8.036852393432,-8.047013968382,-8.057173502211,
	-8.067330996810,-8.077486454062,-8.087639875841,-8.097791264016,-8.107940620447,
	-8.118087946989,-8.128233245488,-8.138376517783,-8.148517765709,-8.158656991090,
	-8.168794195746,-8.178929381489,-8.189062550125,-8.199193703452,-8.209322843263,
	-8.219449971343,-8.229575089470,-8.239698199417,-8.249819302951,-8.259938401829,
	-8.270055497806,-8.280170592627,-8.290283688032,-8.300394785756,-8.310503887525,
	-8.320610995061,-8.330716110079,-8.340819234287,-8.350920369388,-8.361019517079,
	-8.371116679049,-8.381211856984,-8.391305052561,-8.401396267452,-8.411485503324,
	-8.421572761836,-8.431658044644,-8.441741353396,-8.451822689735,-8.461902055296,
	-8.471979451712,-8.482054880607,-8.492128343601,-8.502199842308,-8.512269378335,
	-8.522336953285,-8.532402568754,-8.542466226334,-8.552527927609,-8.562587674160,
	-8.572645467562,-8.582701309381,-8.592755201183,-8.602807144524,-8.612857140957,
	-8.622905192028,-8.632951299279,-8.642995464246,-8.653037688458,-8.663077973442,
	-8.673116320717,-8.683152731797,-8.693187208191,-8.703219751403,-8.713250362932,
	-8.723279044270,-8.733305796906,-8.743330622322,-8.753353521996,-8.763374497399,
	-8.773393550000,-8.783410681259,-8.793425892633,-8.803439185573,-8.813450561527,
	-8.823460021935,-8.833467568233,-8.843473201853,-8.853476924219,-8.863478736754,
	-8.873478640872,-8.883476637984,-8.893472729497,-8.903466916809,-8.913459201318,
	-8.923449584413,-8.933438067480,-8.943424651900,-8.953409339047,-8.963392130294,
	-8.973373027004,-8.983352030539,-8.993329142254,-9.003304363500,-9.013277695623,
	-9.023249139964,-9.033218697858,-9.043186370636,-9.053152159625,-9.063116066146,
	-9.073078091515,-9.083038237042,-9.092996504036,-9.102952893796,-9.112907407621,
	-9.122860046801,-9.132810812625,-9.142759706372,-9.152706729322,-9.162651882747,
	-9.172595167913,-9.182536586083,-9.192476138516,-9.202413826465,-9.212349651176,
	-9.222283613895,-9.232215715858,-9.242145958300,-9.252074342449,-9.262000869530,
	-9.271925540761,-9.281848357357,-9.291769320527,-9.301688431475,-9.311605691402,
	-9.321521101502,-9.331434662966,-9.341346376978,-9.351256244719,-9.361164267365,
	-9.371070446086,-9.380974782049,-9.390877276414,-9.400777930338,-9.410676744971,
	-9.420573721462,-9.430468860950,-9.440362164574,-9.450253633464,-9.460143268749,
	-9.470031071551,-9.479917042986,-9.489801184168,-9.499683496204,-9.509563980196,
	-9.519442637244,-9.529319468440,-9.539194474872,-9.549067657623,-9.558939017771,
	-9.568808556391,-9.578676274551,-9.588542173314,-9.598406253738,-9.608268516879,
	-9.618128963784,-9.627987595498,-9.637844413059,-9.647699417502,-9.657552609855,
	-9.667403991143,-9.677253562385,-9.687101324594,-9.696947278780,-9.706791425947,
	-9.716633767094,-9.726474303215,-9.736313035299,-9.746149964330,-9.755985091287,
	-9.765818417145,-9.775649942871,-9.785479669429,-9.795307597779,-9.805133728873,
	-9.814958063661,-9.824780603085,-9.834601348083,-9.844420299589,-9.854237458531,
	-9.864052825831,-9.873866402407,-9.883678189171,-9.893488187031,-9.903296396887,
	-9.913102819638,-9.922907456173,-9.932710307381,-9.942511374141,-9.952310657329,
	-9.962108157815,-9.971903876465,-9.981697814138,-9.991489971689,-10.001280349966,
	-10.011068949814,-10.020855772070,-10.030640817567,-10.040424087132,-10.050205581589,
	-10.059985301752,-10.069763248434,-10.079539422439,-10.089313824568,-10.099086455616,
	-10.108857316371,-10.118626407617,-10.128393730132,-10.138159284688,-10.147923072052,
	-10.157685092984,-10.167445348241,-10.177203838571,-10.186960564720,-10.196715527425,
	-10.206468727418,-10.216220165428,-10.225969842174,-10.235717758373,-10.245463914734,
	-10.255208311960,-10.264950950749,-10.274691831793,-10.284430955779,-10.294168323386,
	-10.303903935288,-10.313637792155,-10.323369894647,-10.333100243422,-10.342828839129,
	-10.352555682413,-10.362280773911,-10.372004114256,-10.381725704074,-10.391445543984,
	-10.401163634599,-10.410879976527,-10.420594570369,-10.430307416720,-10.440018516168,
	-10.449727869296,-10.459435476679,-10.469141338886,-10.478845456481,-10.488547830021,
	-10.498248460055,-10.507947347128,-10.517644491777,-10.527339894532,-10.537033555917,
	-10.546725476450,-10.556415656642,-10.566104096997,-10.575790798012,-10.585475760180,
	-10.595158983982,-10.604840469898,-10.614520218396,-10.624198229942,-10.633874504991,
	-10.643549043994,-10.653221847393,-10.662892915625,-10.672562249117,-10.682229848293,
	-10.691895713567,-10.701559845346,-10.711222244031,-10.720882910015,-10.730541843684,
	-10.740199045418,-10.749854515587,-10.759508254557,-10.769160262682,-10.778810540314,
	-10.788459087794,-10.798105905456,-10.807750993628,-10.817394352628,-10.827035982769,
	-10.836675884354,-10.846314057680,-10.855950503036,-10.865585220702,-10.875218210951,
	-10.884849474050,-10.894479010254,-10.904106819814,-10.913732902971,-10.923357259958,
	-10.932979891001,-10.942600796316,-10.952219976113,-10.961837430593,-10.971453159947,
	-10.981067164361,-10.990679444010,-11.000289999061,-11.009898829674,-11.019505935999,
	-11.029111318179,-11.038714976345,-11.048316910624,-11.057917121131,-11.067515607974,
	-11.077112371251,-11.086707411051,-11.096300727456,-11.105892320538,-11.115482190358,
	-11.125070336971,-11.134656760421,-11.144241460745,-11.153824437967,-11.163405692105,
	-11.172985223167,-11.182563031150,-11.192139116044,-11.201713477828,-11.211286116471,
	-11.220857031933,-11.230426224164,-11.239993693106,-11.249559438689,-11.259123460834,
	-11.268685759452,-11.278246334443,-11.287805185699,-11.297362313100,-11.306917716517,
	-11.316471395811,-11.326023350830,-11.335573581416,-11.345122087396,-11.354668868590,
	-11.364213924806,-11.373757255841,-11.383298861481,-11.392838741503,-11.402376895671,
	-11.411913323739,-11.421448025451,-11.430981000539,-11.440512248722,-11.450041769711,
	-11.459569563204,-11.469095628887,-11.478619966437,-11.488142575516,-11.497663455777,
	-11.507182606861,-11.516700028395,-11.526215719998,-11.535729681273,-11.545241911815,
	-11.554752411202,-11.564261179005,-11.573768214780,-11.583273518070,-11.592777088406,
	-11.602278925309,-11.611779028284,-11.621277396825,-11.630774030412,-11.640268928515,
	-11.649762090587,-11.659253516071,-11.668743204396,-11.678231154977,-11.687717367216,
	-11.697201840502,-11.706684574210,-11.716165567702,-11.725644820326,-11.735122331415,
	-11.744598100290,-11.754072126257,-11.763544408607,-11.773014946619,-11.782483739555,
	-11.791950786665,-11.801416087182,-11.810879640327,-11.820341445305,-11.829801501305,
	-11.839259807502,-11.848716363056,-11.858171167113,-11.867624218801,-11.877075517235,
	-11.886525061513,-11.895972850717,-11.905418883915,-11.914863160157,-11.924305678479,
	-11.933746437900,-11.943185437422,-11.952622676032,-11.962058152699,-11.971491866376,
	-11.980923816000,-11.990354000489,-11.999782418747,-12.009209069659,-12.018633952093,
	-12.028057064899,-12.037478406909,-12.046897976941,-12.056315773790,-12.065731796237,
	-12.075146043042,-12.084558512949,-12.093969204683,-12.103378116950,-12.112785248438,
	-12.122190597815,-12.131594163730,-12.140995944815,-12.150395939681,-12.159794146920,
	-12.169190565104,-12.178585192785,-12.187978028498,-12.197369070753,-12.206758318043,
	-12.216145768842,-12.225531421599,-12.234915274746,-12.244297326694,-12.253677575830,
	-12.263056020522,-12.272432659118,-12.281807489941,-12.291180511295,-12.300551721460,
	-12.309921118697,-12.319288701241,-12.328654467307,-12.338018415087,-12.347380542750,
	-12.356740848441,-12.366099330283,-12.375455986377,-12.384810814796,-12.394163813594,
	-12.403514980798,-12.412864314412,-12.422211812417,-12.431557472765,-12.440901293389,
	-12.450243272192,-12.459583407055,-12.468921695833,-12.478258136354,-12.487592726422,
	-12.496925463813,-12.506256346278,-12.515585371542,-12.524912537302,-12.534237841229,
	-12.543561280966,-12.552882854129,-12.562202558307,-12.571520391061,-12.580836349922,
	-12.590150432395,-12.599462635955,-12.608772958050,-12.618081396096,-12.627387947482,
	-12.636692609566,-12.645995379677,-12.655296255115,-12.664595233146,-12.673892311010,
	-12.683187485912,-12.692480755029,-12.701772115505,-12.711061564452,-12.720349098950,
	-12.729634716048,-12.738918412762,-12.748200186074,-12.757480032935,-12.766757950260,
	-12.776033934932,-12.785307983800,-12.794580093678,-12.803850261346,-12.813118483548,
	-12.822384756995,-12.831649078360,-12.840911444280,-12.850171851359,-12.859430296162,
	-12.868686775217,-12.877941285016,-12.887193822013,-12.896444382624,-12.905692963227,
	-12.914939560161,-12.924184169728,-12.933426788188,-12.942667411764,-12.951906036638,
	-12.961142658950,-12.970377274803,-12.979609880256,-12.988840471328,-12.998069043996,
	-13.007295594194,-13.016520117815,-13.025742610708,-13.034963068679,-13.044181487491,
	-13.053397862861,-13.062612190463,-13.071824465926,-13.081034684833,-13.090242842722,
	-13.099448935085,-13.108652957366,-13.117854904962,-13.127054773226,-13.136252557458,
	-13.145448252913,-13.154641854797,-13.163833358265,-13.173022758424,-13.182210050329,
	-13.191395228987,-13.200578289352,-13.209759226326,-13.218938034760,-13.228114709453,
	-13.237289245149,-13.246461636539,-13.255631878262,-13.264799964900,-13.273965890981,
	-13.283129650976,-13.292291239303,-13.301450650319,-13.310607878328,-13.319762917574,
	-13.328915762242,-13.338066406460,-13.347214844295,-13.356361069756,-13.365505076790,
	-13.374646859282,-13.383786411058,-13.392923725878,-13.402058797443,-13.411191619388,
	-13.420322185285,-13.429450488640,-13.438576522895,-13.447700281426,-13.456821757540,
	-13.465940944481,-13.475057835422,-13.484172423467,-13.493284701653,-13.502394662945,
	-13.511502300240,-13.520607606361,-13.529710574061,-13.538811196019,-13.547909464842,
	-13.557005373061,-13.566098913135,-13.575190077444,-13.584278858295,-13.593365247916,
	-13.602449238457,-13.611530821993,-13.620609990514,-13.629686735936,-13.638761050088,
	-13.647832924723,-13.656902351508,-13.665969322029,-13.675033827785,-13.684095860192,
	-13.693155410582,-13.702212470197,-13.711267030194,-13.720319081640,-13.729368615515,
	-13.738415622706,-13.747460094012,-13.756502020139,-13.765541391699,-13.774578199212,
	-13.783612433103,-13.792644083701,-13.801673141239,-13.810699595853,-13.819723437580,
	-13.828744656356,-13.837763242020,-13.846779184307,-13.855792472851,-13.864803097182,
	-13.873811046725,-13.882816310800,-13.891818878622,-13.900818739296,-13.909815881819,
	-13.918810295079,-13.927801967853,-13.936790888804,-13.945777046486,-13.954760429335,
	-13.963741025674,-13.972718823707,-13.981693811523,-13.990665977090,-13.999635308257,
	-14.008601792752,-14.017565418179,-14.026526172020,-14.035484041632,-14.044439014244,
	-14.053391076959,-14.062340216750,-14.071286420462,-14.080229674806,-14.089169966363,
	-14.098107281577,-14.107041606759,-14.115972928082,-14.124901231581,-14.133826503153,
	-14.142748728551,-14.151667893388,-14.160583983133,-14.169496983108,-14.178406878491,
	-14.187313654310,-14.196217295443,-14.205117786619,-14.214015112411,-14.222909257241,
	-14.231800205373,-14.240687940914,-14.249572447812,-14.258453709857,-14.267331710672,
	-14.276206433720,-14.285077862298,-14.293945979533,-14.302810768388,-14.311672211650,
	-14.320530291939,-14.329384991697,-14.338236293193,-14.347084178517,-14.355928629580,
	-14.364769628112,-14.373607155661,-14.382441193588,-14.391271723070,-14.400098725095,
	-14.408922180460,-14.417742069769,-14.426558373434,-14.435371071669,-14.444180144490,
	-14.452985571716,-14.461787332960,-14.470585407633,-14.479379774940,-14.488170413877,
	-14.496957303230,-14.505740421575,-14.514519747270,-14.523295258458,-14.532066933065,
	-14.540834748795,-14.549598683127,-14.558358713319,-14.567114816398,-14.575866969163,
	-14.584615148181,-14.593359329784,-14.602099490070,-14.610835604896,-14.619567649877,
	-14.628295600388,-14.637019431555,-14.645739118258,-14.654454635124,-14.663165956530,
	-14.671873056595,-14.680575909181,-14.689274487890,-14.697968766060,-14.706658716765,
	-14.715344312810,-14.724025526729,-14.732702330784,-14.741374696961,-14.750042596966,
	-14.758706002227,-14.767364883887,-14.776019212800,-14.784668959536,-14.793314094369,
	-14.801954587281,-14.810590407956,-14.819221525778,-14.827847909828,-14.836469528883,
	-14.845086351409,-14.853698345562,-14.862305479186,-14.870907719806,-14.879505034626,
	-14.888097390530,-14.896684754075,-14.905267091490,-14.913844368673,-14.922416551185,
	-14.930983604254,-14.939545492763,-14.948102181254,-14.956653633923,-14.965199814616,
	-14.973740686827,-14.982276213693,-14.990806357993,-14.999331082146,-15.007850348204,
	-15.016364117853,-15.024872352407,-15.033375012807,-15.041872059615,-15.050363453014,
	-15.058849152804,-15.067329118397,-15.075803308817,-15.084271682694,-15.092734198263,
	-15.101190813358,-15.109641485412,-15.118086171453,-15.126524828099,-15.134957411557,
	-15.143383877619,-15.151804181659,-15.160218278629,-15.168626123057,-15.177027669043,
	-15.185422870257,-15.193811679935,-15.202194050875,-15.210569935436,-15.218939285532,
	-15.227302052634,-15.235658187759,-15.244007641476,-15.252350363896,-15.260686304671,
	-15.269015412993,-15.277337637588,-15.285652926715,-15.293961228163,-15.302262489246,
	-15.310556656803,-15.318843677194,-15.327123496294,-15.335396059498,-15.343661311708,
	-15.351919197339,-15.360169660312,-15.368412644052,-15.376648091485,-15.384875945037,
	-15.393096146630,-15.401308637679,-15.409513359091,-15.417710251263,-15.425899254077,
	-15.434080306901,-15.442253348584,-15.450418317456,-15.458575151324,-15.466723787472,
	-15.474864162656,-15.482996213105,-15.491119874519,-15.499235082066,-15.507341770379,
	-15.515439873560,-15.523529325170,-15.531610058235,-15.539682005242,-15.547745098136,
	-15.555799268323,-15.563844446663,-15.571880563476,-15.579907548537,-15.587925331073,
	-15.595933839769,-15.603933002763,-15.611922747646,-15.619903001461,-15.627873690706,
	-15.635834741333,-15.643786078745,-15.651727627800,-15.659659312809,-15.667581057538,
	-15.675492785208,-15.683394418498,-15.691285879542,-15.699167089933,-15.707037970723,
	-15.714898442426,-15.722748425018,-15.730587837942,-15.738416600105,-15.746234629884,
	-15.754041845127,-15.761838163157,-15.769623500772,-15.777397774251,-15.785160899355,
	-15.792912791332,-15.800653364921,-15.808382534351,-15.816100213352,-15.823806315156,
	-15.831500752499,-15.839183437630,-15.846854282314,-15.854513197836,-15.862160095011,
	-15.869794884183,-15.877417475235,-15.885027777596,-15.892625700245,-15.900211151718,
	-15.907784040117,-15.915344273114,-15.922891757963,-15.930426401503,-15.937948110169,
	-15.945456789998,-15.952952346641,-15.960434685369,-15.967903711084,-15.975359328326,
	-15.982801441286,-15.990229953814,-15.997644769429,-16.005045791332,-16.012432922414,
	-16.019806065270,-16.027165122208,-16.034509995263,-16.041840586209,-16.049156796570,
	-16.056458527633,-16.063745680465,-16.071018155919,-16.078275854655,-16.085518677151,
	-16.092746523715,-16.099959294506,-16.107156889543,-16.114339208721,-16.121506151832,
	-16.128657618573,-16.135793508570,-16.142913721389,-16.150018156554,-16.157106713566,
	-16.164179291920,-16.171235791120,-16.178276110701,-16.185300150245,-16.192307809398,
	-16.199298987894,-16.206273585570,-16.213231502385,-16.220172638444,-16.227096894012,
	-16.234004169539,-16.240894365680,-16.247767383313,-16.254623123561,-16.261461487815,
	-16.268282377753,-16.275085695364,-16.281871342966,-16.288639223233,-16.295389239214,
	-16.302121294354,-16.308835292520,-16.315531138024,-16.322208735640,-16.328867990633,
	-16.335508808782,-16.342131096399,-16.348734760354,-16.355319708101,-16.361885847698,
	-16.368433087835,-16.374961337850,-16.381470507762,-16.387960508288,-16.394431250868,
	-16.400882647692,-16.407314611720,-16.413727056706,-16.420119897226,-16.426493048694,
	-16.432846427393,-16.439179950495,-16.445493536084,-16.451787103179,-16.458060571762,
	-16.464313862792,-16.470546898237,-16.476759601092,-16.482951895401,-16.489123706282,
	-16.495274959946,-16.501405583723,-16.507515506079,-16.513604656642,-16.519672966218,
	-16.525720366817,-16.531746791668,-16.537752175246,-16.543736453286,-16.549699562805,
	-16.555641442120,-16.561562030869,-16.567461270027,-16.573339101927,-16.579195470272,
	-16.585030320158,-16.590843598090,-16.596635251993,-16.602405231234,-16.608153486635,
	-16.613879970487,-16.619584636564,-16.625267440140,-16.630928337999,-16.636567288448,
	-16.642184251331,-16.647779188042,-16.653352061529,-16.658902836315,-16.664431478498,
	-16.669937955769,-16.675422237412,-16.680884294321,-16.686324099002,-16.691741625581,
	-16.697136849813,-16.702509749084,-16.707860302418,-16.713188490483,-16.718494295593,
	-16.723777701710,-16.729038694452,-16.734277261089,-16.739493390547,-16.744687073411,
	-16.749858301921,-16.755007069975,-16.760133373126,-16.765237208581,-16.770318575198,
	-16.775377473486,-16.780413905596,-16.785427875324,-16.790419388098,-16.795388450981,
	-16.800335072660,-16.805259263440,-16.810161035238,-16.815040401577,-16.819897377574,
	-16.824731979933,-16.829544226938,-16.834334138439,-16.839101735847,-16.843847042117,
	-16.848570081741,-16.853270880736,-16.857949466629,-16.862605868447,-16.867240116701,
	-16.871852243378,-16.876442281918,-16.881010267208,-16.885556235562,-16.890080224707,
	-16.894582273767,-16.899062423249,-16.903520715023,-16.907957192308,-16.912371899654,
	-16.916764882923,-16.921136189276,-16.925485867147,-16.929813966233,-16.934120537470,
	-16.938405633017,-16.942669306234,-16.946911611667,-16.951132605023,-16.955332343156,
	-16.959510884043,-16.963668286766,-16.967804611490,-16.971919919446,-16.976014272904,
	-16.980087735162,-16.984140370516,-16.988172244246,-16.992183422590,-16.996173972725,
	-17.000143962751,-17.004093461659,-17.008022539321,-17.011931266462,-17.015819714642,
	-17.019687956234,-17.023536064403,-17.027364113085,-17.031172176966,-17.034960331460,
	-17.038728652692,-17.042477217471,-17.046206103276,-17.049915388229,-17.053605151079,
	-17.057275471180,-17.060926428471,-17.064558103455,-17.068170577178,-17.071763931213,
	-17.075338247637,-17.078893609010,-17.082430098361,-17.085947799162,-17.089446795313,
	-17.092927171125,-17.096389011293,-17.099832400888,-17.103257425329,-17.106664170373,
	-17.110052722090,-17.113423166850,-17.116775591304,-17.120110082365,-17.123426727193,
	-17.126725613179,-17.130006827924,-17.133270459228,-17.136516595068,-17.139745323587,
	-17.142956733076,-17.146150911959,-17.149327948777,-17.152487932174,-17.155630950880,
	-17.158757093702,-17.161866449502,-17.164959107189,-17.168035155702,-17.171094683998,
	-17.174137781039,-17.177164535776,-17.180175037141,-17.183169374030,-17.186147635294,
	-17.189109909724,-17.192056286041,-17.194986852886,-17.197901698804,-17.200800912239,
	-17.203684581516,-17.206552794838,-17.209405640271,-17.212243205733,-17.215065578989,
	-17.217872847636,-17.220665099098,-17.223442420615,-17.226204899231,-17.228952621793,
	-17.231685674933,-17.234404145068,-17.237108118387,-17.239797680846,-17.242472918157,
	-17.245133915786,-17.247780758939,-17.250413532561,-17.253032321327,-17.255637209634,
	-17.258228281597,-17.260805621043,-17.263369311501,-17.265919436202,-17.268456078069,
	-17.270979319714,-17.273489243433,-17.275985931198,-17.278469464657,-17.280939925123,
	-17.283397393577,-17.285841950657,-17.288273676659,-17.290692651529,-17.293098954862,
	-17.295492665896,-17.297873863511,-17.300242626225,-17.302599032190,-17.304943159188,
	-17.307275084629,-17.309594885553,-17.311902638617,-17.314198420103,-17.316482305909,
	-17.318754371550,-17.321014692154,-17.323263342463,-17.325500396827,-17.327725929204,
	-17.329940013162,-17.332142721872,-17.334334128109,-17.336514304251,-17.338683322279,
	-17.340841253772,-17.342988169912,-17.345124141476,-17.347249238843,-17.349363531986,
	-17.351467090477,-17.353559983484,-17.355642279770,-17.357714047697,-17.359775355218,
	-17.361826269885,-17.363866858844,-17.365897188836,-17.367917326201,-17.369927336869,
	-17.371927286371,-17.373917239833,-17.375897261976,-17.377867417122,-17.379827769186,
	-17.381778381685,-17.383719317735,-17.385650640049,-17.387572410944,-17.389484692335,
	-17.391387545741,-17.393281032285,-17.395165212693,-17.397040147295,-17.398905896029,
	-17.400762518441,-17.402610073682,-17.404448620517,-17.406278217318,-17.408098922072,
	-17.409910792379,-17.411713885454,-17.413508258126,-17.415293966844,-17.417071067677,
	-17.418839616312,-17.420599668060,-17.422351277855,-17.424094500256,-17.425829389450,
	-17.427555999251,-17.429274383106,-17.430984594089,-17.432686684913,-17.434380707922,
	-17.436066715100,-17.437744758067,-17.439414888085,-17.441077156059,-17.442731612538,
	-17.444378307714,-17.446017291431,-17.447648613180,-17.449272322104,-17.450888467000,
	-17.452497096320,-17.454098258173,-17.455692000326,-17.457278370210,-17.458857414915,
	-17.460429181199,-17.461993715486,-17.463551063868,-17.465101272107,-17.466644385641,
	-17.468180449579,-17.469709508709,-17.471231607496,-17.472746790085,-17.474255100307,
	-17.475756581675,-17.477251277387,-17.478739230332,-17.480220483090,-17.481695077930,
	-17.483163056819,-17.484624461418,-17.486079333089,-17.487527712891,-17.488969641588,
	-17.490405159648,-17.491834307243,-17.493257124257,-17.494673650281,-17.496083924621,
	-17.497487986294,-17.498885874035,-17.500277626298,-17.501663281256,-17.503042876803,
	-17.504416450558,-17.505784039866,-17.507145681800,-17.508501413161,-17.509851270483,
	-17.511195290034,-17.512533507816,-17.513865959569,-17.515192680772,-17.516513706645,
	-17.517829072152,-17.519138812000,-17.520442960643,-17.521741552286,-17.523034620881,
	-17.524322200134,-17.525604323503,-17.526881024206,-17.528152335214,-17.529418289260,
	-17.530678918837,-17.531934256201,-17.533184333375,-17.534429182145,-17.535668834068,
	-17.536903320469,-17.538132672447,-17.539356920871,-17.540576096389,-17.541790229424,
	-17.542999350176,-17.544203488629,-17.545402674545,-17.546596937473,-17.547786306743,
	-17.548970811477,-17.550150480582,-17.551325342756,-17.552495426489,-17.553660760063,
	-17.554821371558,-17.555977288847,-17.557128539603,-17.558275151298,-17.559417151207,
	-17.560554566404,-17.561687423771,-17.562815749995,-17.563939571568,-17.565058914793,
	-17.566173805783,-17.567284270462,-17.568390334569,-17.569492023655,-17.570589363089,
	-17.571682378059,-17.572771093568,-17.573855534443,-17.574935725332,-17.576011690705,
	-17.577083454858,-17.578151041913,-17.579214475818,-17.580273780351,-17.581328979120,
	-17.582380095566,-17.583427152958,-17.584470174405,-17.585509182847,-17.586544201064,
	-17.587575251670,-17.588602357123,-17.589625539717
	}
};

double always_inline s03_stage2clip(double x) {
    double f = fabs(x);
    f = f * s03_stage2_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s03_stage2_table.data[0];
    } else if (i >= s03_stage2_table.size-1) {
        f = s03_stage2_table.data[s03_stage2_table.size-1];
    } else {
        f -= i;
        f = s03_stage2_table.data[i]*(1-f) + s03_stage2_table.data[i+1]*f;
    }
    return copysign(f, x);
}

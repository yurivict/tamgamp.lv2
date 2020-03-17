
// s04_stage4_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  10.000000
 // --table_div  23.641459
 // --table_op  1.000000

struct tables04_stage4 { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables04_stage4_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables04_stage4&() const { return *(tables04_stage4*)this; }
};

static tables04_stage4_imp<2048> s04_stage4_table __rt_data = {
	0,-8.47652,204.7,2048, {
	0.000000000000,-0.014947004826,-0.029850637092,-0.044711248840,-0.059529189826,
	-0.074304807512,-0.089038447065,-0.103730451375,-0.118381161048,-0.132990914424,
	-0.147560047576,-0.162088894322,-0.176577786227,-0.191027052615,-0.205437020575,
	-0.219808014966,-0.234140358426,-0.248434371384,-0.262690372061,-0.276908676481,
	-0.291089598483,-0.305233449721,-0.319340539682,-0.333411175686,-0.347445662901,
	-0.361444304347,-0.375407400909,-0.389335251342,-0.403228152283,-0.417086398260,
	-0.430910281698,-0.444700092932,-0.458456120215,-0.472178649725,-0.485867965580,
	-0.499524349843,-0.513148082532,-0.526739441632,-0.540298703102,-0.553826140888,
	-0.567322026929,-0.580786631169,-0.594220221569,-0.607623064113,-0.620995422819,
	-0.634337559753,-0.647649735031,-0.660932206839,-0.674185231435,-0.687409063164,
	-0.700603954466,-0.713770155886,-0.726907916085,-0.740017481852,-0.753099098112,
	-0.766153007935,-0.779179452550,-0.792178671353,-0.805150901917,-0.818096380004,
	-0.831015339574,-0.843908012796,-0.856774630058,-0.869615419977,-0.882430609410,
	-0.895220423465,-0.907985085508,-0.920724817179,-0.933439838396,-0.946130367371,
	-0.958796620615,-0.971438812953,-0.984057157531,-0.996651865829,-1.009223147667,
	-1.021771211221,-1.034296263027,-1.046798507998,-1.059278149426,-1.071735389000,
	-1.084170426811,-1.096583461366,-1.108974689593,-1.121344306856,-1.133692506962,
	-1.146019482172,-1.158325423211,-1.170610519279,-1.182874958059,-1.195118925727,
	-1.207342606963,-1.219546184960,-1.231729841436,-1.243893756640,-1.256038109363,
	-1.268163076951,-1.280268835310,-1.292355558917,-1.304423420832,-1.316472592706,
	-1.328503244787,-1.340515545937,-1.352509663633,-1.364485763984,-1.376444011735,
	-1.388384570279,-1.400307601664,-1.412213266606,-1.424101724495,-1.435973133405,
	-1.447827650102,-1.459665430056,-1.471486627449,-1.483291395181,-1.495079884883,
	-1.506852246923,-1.518608630417,-1.530349183237,-1.542074052019,-1.553783382172,
	-1.565477317889,-1.577156002151,-1.588819576741,-1.600468182248,-1.612101958078,
	-1.623721042462,-1.635325572464,-1.646915683992,-1.658491511799,-1.670053189502,
	-1.681600849580,-1.693134623389,-1.704654641169,-1.716161032048,-1.727653924055,
	-1.739133444127,-1.750599718113,-1.762052870789,-1.773493025858,-1.784920305964,
	-1.796334832697,-1.807736726602,-1.819126107185,-1.830503092921,-1.841867801264,
	-1.853220348651,-1.864560850512,-1.875889421279,-1.887206174386,-1.898511222286,
	-1.909804676453,-1.921086647389,-1.932357244633,-1.943616576768,-1.954864751426,
	-1.966101875300,-1.977328054146,-1.988543392790,-1.999747995142,-2.010941964192,
	-2.022125402027,-2.033298409831,-2.044461087897,-2.055613535627,-2.066755851547,
	-2.077888133306,-2.089010477689,-2.100122980617,-2.111225737161,-2.122318841543,
	-2.133402387142,-2.144476466505,-2.155541171351,-2.166596592574,-2.177642820256,
	-2.188679943666,-2.199708051273,-2.210727230748,-2.221737568968,-2.232739152029,
	-2.243732065245,-2.254716393159,-2.265692219546,-2.276659627419,-2.287618699036,
	-2.298569515907,-2.309512158796,-2.320446707729,-2.331373242001,-2.342291840179,
	-2.353202580107,-2.364105538918,-2.375000793029,-2.385888418157,-2.396768489317,
	-2.407641080831,-2.418506266332,-2.429364118769,-2.440214710415,-2.451058112869,
	-2.461894397061,-2.472723633261,-2.483545891079,-2.494361239476,-2.505169746764,
	-2.515971480611,-2.526766508050,-2.537554895482,-2.548336708679,-2.559112012791,
	-2.569880872349,-2.580643351274,-2.591399512875,-2.602149419860,-2.612893134337,
	-2.623630717820,-2.634362231233,-2.645087734915,-2.655807288623,-2.666520951541,
	-2.677228782278,-2.687930838878,-2.698627178821,-2.709317859028,-2.720002935866,
	-2.730682465153,-2.741356502161,-2.752025101618,-2.762688317719,-2.773346204122,
	-2.783998813957,-2.794646199831,-2.805288413826,-2.815925507510,-2.826557531938,
	-2.837184537654,-2.847806574698,-2.858423692610,-2.869035940429,-2.879643366705,
	-2.890246019494,-2.900843946368,-2.911437194417,-2.922025810251,-2.932609840006,
	-2.943189329346,-2.953764323467,-2.964334867102,-2.974901004522,-2.985462779542,
	-2.996020235523,-3.006573415373,-3.017122361559,-3.027667116099,-3.038207720574,
	-3.048744216126,-3.059276643468,-3.069805042876,-3.080329454206,-3.090849916886,
	-3.101366469925,-3.111879151914,-3.122388001030,-3.132893055040,-3.143394351301,
	-3.153891926767,-3.164385817989,-3.174876061119,-3.185362691914,-3.195845745736,
	-3.206325257559,-3.216801261969,-3.227273793168,-3.237742884975,-3.248208570833,
	-3.258670883806,-3.269129856587,-3.279585521499,-3.290037910495,-3.300487055165,
	-3.310932986737,-3.321375736076,-3.331815333695,-3.342251809747,-3.352685194039,
	-3.363115516023,-3.373542804807,-3.383967089155,-3.394388397488,-3.404806757888,
	-3.415222198100,-3.425634745533,-3.436044427266,-3.446451270047,-3.456855300295,
	-3.467256544106,-3.477655027252,-3.488050775184,-3.498443813035,-3.508834165621,
	-3.519221857445,-3.529606912696,-3.539989355256,-3.550369208697,-3.560746496285,
	-3.571121240986,-3.581493465461,-3.591863192072,-3.602230442886,-3.612595239672,
	-3.622957603907,-3.633317556775,-3.643675119173,-3.654030311707,-3.664383154701,
	-3.674733668191,-3.685081871935,-3.695427785407,-3.705771427806,-3.716112818051,
	-3.726451974789,-3.736788916392,-3.747123660961,-3.757456226327,-3.767786630055,
	-3.778114889440,-3.788441021515,-3.798765043048,-3.809086970548,-3.819406820261,
	-3.829724608177,-3.840040350027,-3.850354061289,-3.860665757185,-3.870975452685,
	-3.881283162509,-3.891588901127,-3.901892682762,-3.912194521387,-3.922494430734,
	-3.932792424287,-3.943088515291,-3.953382716748,-3.963675041420,-3.973965501829,
	-3.984254110263,-3.994540878771,-4.004825819168,-4.015108943035,-4.025390261720,
	-4.035669786340,-4.045947527783,-4.056223496706,-4.066497703539,-4.076770158484,
	-4.087040871518,-4.097309852393,-4.107577110638,-4.117842655558,-4.128106496236,
	-4.138368641535,-4.148629100099,-4.158887880350,-4.169144990496,-4.179400438525,
	-4.189654232209,-4.199906379106,-4.210156886558,-4.220405761694,-4.230653011430,
	-4.240898642470,-4.251142661305,-4.261385074218,-4.271625887279,-4.281865106352,
	-4.292102737090,-4.302338784938,-4.312573255135,-4.322806152712,-4.333037482495,
	-4.343267249104,-4.353495456954,-4.363722110255,-4.373947213013,-4.384170769033,
	-4.394392781914,-4.404613255052,-4.414832191645,-4.425049594685,-4.435265466964,
	-4.445479811074,-4.455692629405,-4.465903924147,-4.476113697292,-4.486321950628,
	-4.496528685748,-4.506733904042,-4.516937606703,-4.527139794724,-4.537340468901,
	-4.547539629829,-4.557737277906,-4.567933413331,-4.578128036105,-4.588321146030,
	-4.598512742711,-4.608702825552,-4.618891393762,-4.629078446348,-4.639263982122,
	-4.649447999695,-4.659630497480,-4.669811473690,-4.679990926341,-4.690168853247,
	-4.700345252025,-4.710520120089,-4.720693454657,-4.730865252741,-4.741035511158,
	-4.751204226519,-4.761371395236,-4.771537013517,-4.781701077369,-4.791016497268,
	-4.799506698672,-4.807599231415,-4.815410258707,-4.823001152211,-4.830410776833,
	-4.837666232479,-4.844787604916,-4.851790427688,-4.858687097508,-4.865487750621,
	-4.872200836629,-4.878833511048,-4.885391913514,-4.891881370781,-4.898306548505,
	-4.904671567125,-4.910980091943,-4.917235404246,-4.923440458253,-4.929597927254,
	-4.935710241425,-4.941779619109,-4.947808092930,-4.953797531775,-4.959749659425,
	-4.965666070457,-4.971548243901,-4.977397555041,-4.983215285652,-4.989002632946,
	-4.994760717405,-5.000490589678,-5.006193236683,-5.011869587013,-5.017520515759,
	-5.023146848807,-5.028749366697,-5.034328808092,-5.039885872896,-5.045421225083,
	-5.050935495249,-5.056429282934,-5.061903158752,-5.067357666293,-5.072793323905,
	-5.078210626298,-5.083610046033,-5.088992034877,-5.094357025062,-5.099705430435,
	-5.105037647534,-5.110354056568,-5.115655022340,-5.120940895091,-5.126212011296,
	-5.131468694389,-5.136711255457,-5.141939993872,-5.147155197889,-5.152357145201,
	-5.157546103464,-5.162722330780,-5.167886076161,-5.173037579951,-5.178177074239,
	-5.183304783229,-5.188420923606,-5.193525704868,-5.198619329644,-5.203701993993,
	-5.208773887690,-5.213835194492,-5.218886092387,-5.223926753841,-5.228957346017,
	-5.233978030996,-5.238988965977,-5.243990303474,-5.248982191495,-5.253964773721,
	-5.258938189670,-5.263902574856,-5.268858060938,-5.273804775865,-5.278742844010,
	-5.283672386305,-5.288593520359,-5.293506360582,-5.298411018292,-5.303307601833,
	-5.308196216667,-5.313076965480,-5.317949948278,-5.322815262470,-5.327673002961,
	-5.332523262236,-5.337366130432,-5.342201695423,-5.347030042890,-5.351851256387,
	-5.356665417416,-5.361472605487,-5.366272898181,-5.371066371210,-5.375853098475,
	-5.380633152121,-5.385406602589,-5.390173518670,-5.394933967550,-5.399688014863,
	-5.404435724730,-5.409177159809,-5.413912381335,-5.418641449159,-5.423364421791,
	-5.428081356435,-5.432792309028,-5.437497334275,-5.442196485680,-5.446889815584,
	-5.451577375193,-5.456259214612,-5.460935382871,-5.465605927958,-5.470270896843,
	-5.474930335505,-5.479584288963,-5.484232801297,-5.488875915672,-5.493513674362,
	-5.498146118775,-5.502773289473,-5.507395226194,-5.512011967874,-5.516623552663,
	-5.521230017950,-5.525831400378,-5.530427735864,-5.535019059616,-5.539605406150,
	-5.544186809308,-5.548763302274,-5.553334917586,-5.557901687158,-5.562463642290,
	-5.567020813682,-5.571573231452,-5.576120925145,-5.580663923750,-5.585202255708,
	-5.589735948932,-5.594265030811,-5.598789528227,-5.603309467564,-5.607824874720,
	-5.612335775118,-5.616842193716,-5.621344155018,-5.625841683081,-5.630334801530,
	-5.634823533562,-5.639307901960,-5.643787929097,-5.648263636948,-5.652735047098,
	-5.657202180750,-5.661665058732,-5.666123701506,-5.670578129175,-5.675028361491,
	-5.679474417862,-5.683916317359,-5.688354078721,-5.692787720366,-5.697217260393,
	-5.701642716591,-5.706064106445,-5.710481447139,-5.714894755568,-5.719304048338,
	-5.723709341774,-5.728110651924,-5.732507994567,-5.736901385218,-5.741290839128,
	-5.745676371295,-5.750057996467,-5.754435729145,-5.758809583590,-5.763179573824,
	-5.767545713640,-5.771908016600,-5.776266496045,-5.780621165093,-5.784972036649,
	-5.789319123404,-5.793662437844,-5.798001992247,-5.802337798692,-5.806669869061,
	-5.810998215043,-5.815322848134,-5.819643779646,-5.823961020705,-5.828274582258,
	-5.832584475073,-5.836890709745,-5.841193296696,-5.845492246181,-5.849787568287,
	-5.854079272939,-5.858367369903,-5.862651868785,-5.866932779036,-5.871210109956,
	-5.875483870693,-5.879754070249,-5.884020717479,-5.888283821096,-5.892543389671,
	-5.896799431638,-5.901051955294,-5.905300968799,-5.909546480185,-5.913788497351,
	-5.918027028069,-5.922262079984,-5.926493660616,-5.930721777363,-5.934946437504,
	-5.939167648195,-5.943385416480,-5.947599749283,-5.951810653415,-5.956018135578,
	-5.960222202359,-5.964422860240,-5.968620115591,-5.972813974681,-5.977004443670,
	-5.981191528618,-5.985375235482,-5.989555570119,-5.993732538287,-5.997906145647,
	-6.002076397763,-6.006243300103,-6.010406858044,-6.014567076868,-6.018723961766,
	-6.022877517840,-6.027027750102,-6.031174663476,-6.035318262800,-6.039458552825,
	-6.043595538219,-6.047729223566,-6.051859613365,-6.055986712036,-6.060110523918,
	-6.064231053270,-6.068348304271,-6.072462281025,-6.076572987555,-6.080680427813,
	-6.084784605670,-6.088885524929,-6.092983189314,-6.097077602478,-6.101168768005,
	-6.105256689403,-6.109341370114,-6.113422813507,-6.117501022885,-6.121576001480,
	-6.125647752458,-6.129716278919,-6.133781583896,-6.137843670357,-6.141902541204,
	-6.145958199276,-6.150010647348,-6.154059888133,-6.158105924281,-6.162148758381,
	-6.166188392958,-6.170224830481,-6.174258073356,-6.178288123930,-6.182314984491,
	-6.186338657270,-6.190359144438,-6.194376448110,-6.198390570343,-6.202401513140,
	-6.206409278444,-6.210413868147,-6.214415284083,-6.218413528033,-6.222408601722,
	-6.226400506823,-6.230389244955,-6.234374817685,-6.238357226526,-6.242336472940,
	-6.246312558337,-6.250285484076,-6.254255251465,-6.258221861760,-6.262185316169,
	-6.266145615849,-6.270102761907,-6.274056755403,-6.278007597344,-6.281955288694,
	-6.285899830364,-6.289841223219,-6.293779468076,-6.297714565707,-6.301646516833,
	-6.305575322131,-6.309500982231,-6.313423497716,-6.317342869125,-6.321259096950,
	-6.325172181637,-6.329082123589,-6.332988923162,-6.336892580668,-6.340793096375,
	-6.344690470508,-6.348584703246,-6.352475794725,-6.356363745038,-6.360248554234,
	-6.364130222321,-6.368008749260,-6.371884134975,-6.375756379343,-6.379625482200,
	-6.383491443342,-6.387354262521,-6.391213939447,-6.395070473790,-6.398923865178,
	-6.402774113199,-6.406621217399,-6.410465177282,-6.414305992315,-6.418143661920,
	-6.421978185483,-6.425809562346,-6.429637791815,-6.433462873153,-6.437284805585,
	-6.441103588296,-6.444919220431,-6.448731701097,-6.452541029360,-6.456347204250,
	-6.460150224756,-6.463950089828,-6.467746798378,-6.471540349281,-6.475330741371,
	-6.479117973445,-6.482902044264,-6.486682952547,-6.490460696978,-6.494235276202,
	-6.498006688828,-6.501774933425,-6.505540008527,-6.509301912629,-6.513060644188,
	-6.516816201628,-6.520568583331,-6.524317787645,-6.528063812880,-6.531806657311,
	-6.535546319175,-6.539282796671,-6.543016087965,-6.546746191185,-6.550473104421,
	-6.554196825730,-6.557917353131,-6.561634684607,-6.565348818105,-6.569059751539,
	-6.572767482783,-6.576472009678,-6.580173330028,-6.583871441604,-6.587566342139,
	-6.591258029331,-6.594946500844,-6.598631754306,-6.602313787311,-6.605992597416,
	-6.609668182144,-6.613340538985,-6.617009665391,-6.620675558782,-6.624338216542,
	-6.627997636020,-6.631653814532,-6.635306749359,-6.638956437747,-6.642602876909,
	-6.646246064023,-6.649885996232,-6.653522670648,-6.657156084347,-6.660786234369,
	-6.664413117725,-6.668036731389,-6.671657072302,-6.675274137371,-6.678887923471,
	-6.682498427442,-6.686105646093,-6.689709576196,-6.693310214493,-6.696907557691,
	-6.700501602466,-6.704092345460,-6.707679783280,-6.711263912504,-6.714844729676,
	-6.718422231305,-6.721996413870,-6.725567273817,-6.729134807560,-6.732699011479,
	-6.736259881925,-6.739817415212,-6.743371607627,-6.746922455422,-6.750469954819,
	-6.754014102005,-6.757554893139,-6.761092324347,-6.764626391723,-6.768157091330,
	-6.771684419199,-6.775208371331,-6.778728943696,-6.782246132231,-6.785759932844,
	-6.789270341411,-6.792777353778,-6.796280965759,-6.799781173141,-6.803277971675,
	-6.806771357087,-6.810261325070,-6.813747871288,-6.817230991373,-6.820710680929,
	-6.824186935531,-6.827659750721,-6.831129122016,-6.834595044899,-6.838057514827,
	-6.841516527226,-6.844972077495,-6.848424161001,-6.851872773085,-6.855317909057,
	-6.858759564200,-6.862197733769,-6.865632412990,-6.869063597060,-6.872491281148,
	-6.875915460397,-6.879336129922,-6.882753284807,-6.886166920113,-6.889577030872,
	-6.892983612088,-6.896386658738,-6.899786165774,-6.903182128119,-6.906574540672,
	-6.909963398304,-6.913348695859,-6.916730428157,-6.920108589991,-6.923483176128,
	-6.926854181310,-6.930221600254,-6.933585427651,-6.936945658168,-6.940302286445,
	-6.943655307101,-6.947004714728,-6.950350503893,-6.953692669141,-6.957031204992,
	-6.960366105944,-6.963697366468,-6.967024981015,-6.970348944011,-6.973669249862,
	-6.976985892947,-6.980298867625,-6.983608168234,-6.986913789088,-6.990215724479,
	-6.993513968679,-6.996808515937,-7.000099360483,-7.003386496524,-7.006669918248,
	-7.009949619820,-7.013225595389,-7.016497839080,-7.019766345001,-7.023031107238,
	-7.026292119862,-7.029549376920,-7.032802872443,-7.036052600445,-7.039298554919,
	-7.042540729841,-7.045779119171,-7.049013716849,-7.052244516799,-7.055471512930,
	-7.058694699132,-7.061914069280,-7.065129617232,-7.068341336832,-7.071549221908,
	-7.074753266271,-7.077953463721,-7.081149808040,-7.084342292998,-7.087530912349,
	-7.090715659837,-7.093896529189,-7.097073514122,-7.100246608338,-7.103415805529,
	-7.106581099373,-7.109742483537,-7.112899951678,-7.116053497440,-7.119203114459,
	-7.122348796358,-7.125490536752,-7.128628329245,-7.131762167433,-7.134892044902,
	-7.138017955231,-7.141139891989,-7.144257848739,-7.147371819036,-7.150481796426,
	-7.153587774452,-7.156689746647,-7.159787706541,-7.162881647657,-7.165971563513,
	-7.169057447622,-7.172139293493,-7.175217094631,-7.178290844537,-7.181360536709,
	-7.184426164643,-7.187487721831,-7.190545201765,-7.193598597934,-7.196647903826,
	-7.199693112927,-7.202734218727,-7.205771214711,-7.208804094367,-7.211832851184,
	-7.214857478652,-7.217877970262,-7.220894319510,-7.223906519890,-7.226914564904,
	-7.229918448054,-7.232918162848,-7.235913702798,-7.238905061420,-7.241892232236,
	-7.244875208774,-7.247853984569,-7.250828553160,-7.253798908096,-7.256765042933,
	-7.259726951234,-7.262684626571,-7.265638062526,-7.268587252689,-7.271532190662,
	-7.274472870055,-7.277409284490,-7.280341427602,-7.283269293035,-7.286192874448,
	-7.289112165511,-7.292027159908,-7.294937851337,-7.297844233511,-7.300746300156,
	-7.303644045015,-7.306537461846,-7.309426544424,-7.312311286539,-7.315191682000,
	-7.318067724634,-7.320939408286,-7.323806726818,-7.326669674113,-7.329528244075,
	-7.332382430626,-7.335232227710,-7.338077629292,-7.340918629358,-7.343755221918,
	-7.346587401004,-7.349415160672,-7.352238495001,-7.355057398094,-7.357871864081,
	-7.360681887114,-7.363487461375,-7.366288581070,-7.369085240431,-7.371877433721,
	-7.374665155226,-7.377448399266,-7.380227160186,-7.383001432361,-7.385771210199,
	-7.388536488134,-7.391297260635,-7.394053522200,-7.396805267361,-7.399552490681,
	-7.402295186757,-7.405033350219,-7.407766975731,-7.410496057994,-7.413220591740,
	-7.415940571740,-7.418655992799,-7.421366849761,-7.424073137505,-7.426774850948,
	-7.429471985047,-7.432164534794,-7.434852495224,-7.437535861409,-7.440214628462,
	-7.442888791538,-7.445558345830,-7.448223286576,-7.450883609053,-7.453539308584,
	-7.456190380531,-7.458836820302,-7.461478623350,-7.464115785170,-7.466748301302,
	-7.469376167335,-7.471999378899,-7.474617931675,-7.477231821386,-7.479841043806,
	-7.482445594756,-7.485045470104,-7.487640665767,-7.490231177712,-7.492817001955,
	-7.495398134562,-7.497974571648,-7.500546309382,-7.503113343981,-7.505675671716,
	-7.508233288909,-7.510786191934,-7.513334377219,-7.515877841246,-7.518416580548,
	-7.520950591716,-7.523479871392,-7.526004416276,-7.528524223120,-7.531039288735,
	-7.533549609987,-7.536055183798,-7.538556007147,-7.541052077070,-7.543543390661,
	-7.546029945074,-7.548511737517,-7.550988765260,-7.553461025631,-7.555928516018,
	-7.558391233868,-7.560849176687,-7.563302342044,-7.565750727568,-7.568194330946,
	-7.570633149930,-7.573067182332,-7.575496426026,-7.577920878949,-7.580340539100,
	-7.582755404539,-7.585165473392,-7.587570743847,-7.589971214156,-7.592366882634,
	-7.594757747661,-7.597143807680,-7.599525061201,-7.601901506798,-7.604273143107,
	-7.606639968834,-7.609001982748,-7.611359183685,-7.613711570544,-7.616059142294,
	-7.618401897969,-7.620739836668,-7.623072957558,-7.625401259873,-7.627724742914,
	-7.630043406049,-7.632357248714,-7.634666270412,-7.636970470713,-7.639269849256,
	-7.641564405748,-7.643854139963,-7.646139051744,-7.648419141002,-7.650694407717,
	-7.652964851937,-7.655230473779,-7.657491273428,-7.659747251139,-7.661998407234,
	-7.664244742106,-7.666486256216,-7.668722950093,-7.670954824338,-7.673181879618,
	-7.675404116672,-7.677621536305,-7.679834139394,-7.682041926884,-7.684244899790,
	-7.686443059195,-7.688636406252,-7.690824942184,-7.693008668282,-7.695187585907,
	-7.697361696489,-7.699531001526,-7.701695502586,-7.703855201308,-7.706010099397,
	-7.708160198627,-7.710305500844,-7.712446007959,-7.714581721954,-7.716712644880,
	-7.718838778854,-7.720960126064,-7.723076688765,-7.725188469280,-7.727295470002,
	-7.729397693389,-7.731495141969,-7.733587818337,-7.735675725157,-7.737758865157,
	-7.739837241135,-7.741910855956,-7.743979712551,-7.746043813918,-7.748103163121,
	-7.750157763293,-7.752207617629,-7.754252729394,-7.756293101916,-7.758328738591,
	-7.760359642878,-7.762385818302,-7.764407268454,-7.766423996988,-7.768436007625,
	-7.770443304147,-7.772445890403,-7.774443770304,-7.776436947825,-7.778425427004,
	-7.780409211942,-7.782388306804,-7.784362715815,-7.786332443264,-7.788297493502,
	-7.790257870941,-7.792213580054,-7.794164625375,-7.796111011499,-7.798052743082,
	-7.799989824840,-7.801922261547,-7.803850058038,-7.805773219208,-7.807691750009,
	-7.809605655452,-7.811514940606,-7.813419610599,-7.815319670615,-7.817215125896,
	-7.819105981741,-7.820992243503,-7.822873916594,-7.824751006482,-7.826623518686,
	-7.828491458786,-7.830354832411,-7.832213645248,-7.834067903036,-7.835917611568,
	-7.837762776690,-7.839603404301,-7.841439500352,-7.843271070845,-7.845098121836,
	-7.846920659430,-7.848738689782,-7.850552219100,-7.852361253640,-7.854165799707,
	-7.855965863657,-7.857761451894,-7.859552570869,-7.861339227082,-7.863121427081,
	-7.864899177459,-7.866672484857,-7.868441355962,-7.870205797506,-7.871965816269,
	-7.873721419071,-7.875472612781,-7.877219404310,-7.878961800612,-7.880699808685,
	-7.882433435571,-7.884162688351,-7.885887574150,-7.887608100135,-7.889324273512,
	-7.891036101529,-7.892743591474,-7.894446750672,-7.896145586492,-7.897840106336,
	-7.899530317650,-7.901216227914,-7.902897844645,-7.904575175401,-7.906248227771,
	-7.907917009385,-7.909581527906,-7.911241791031,-7.912897806495,-7.914549582065,
	-7.916197125542,-7.917840444761,-7.919479547588,-7.921114441925,-7.922745135702,
	-7.924371636883,-7.925993953463,-7.927612093467,-7.929226064949,-7.930835875995,
	-7.932441534720,-7.934043049266,-7.935640427805,-7.937233678536,-7.938822809687,
	-7.940407829512,-7.941988746291,-7.943565568331,-7.945138303965,-7.946706961551,
	-7.948271549471,-7.949832076134,-7.951388549969,-7.952940979433,-7.954489373002,
	-7.956033739177,-7.957574086482,-7.959110423461,-7.960642758679,-7.962171100725,
	-7.963695458205,-7.965215839747,-7.966732253999,-7.968244709626,-7.969753215316,
	-7.971257779771,-7.972758411713,-7.974255119882,-7.975747913035,-7.977236799945,
	-7.978721789401,-7.980202890211,-7.981680111194,-7.983153461188,-7.984622949043,
	-7.986088583625,-7.987550373814,-7.989008328503,-7.990462456597,-7.991912767015,
	-7.993359268690,-7.994801970563,-7.996240881591,-7.997676010738,-7.999107366981,
	-8.000534959309,-8.001958796718,-8.003378888215,-8.004795242817,-8.006207869549,
	-8.007616777444,-8.009021975545,-8.010423472901,-8.011821278571,-8.013215401618,
	-8.014605851113,-8.015992636135,-8.017375765767,-8.018755249099,-8.020131095224,
	-8.021503313244,-8.022871912262,-8.024236901388,-8.025598289733,-8.026956086415,
	-8.028310300553,-8.029660941270,-8.031008017692,-8.032351538946,-8.033691514162,
	-8.035027952472,-8.036360863008,-8.037690254905,-8.039016137296,-8.040338519319,
	-8.041657410106,-8.042972818795,-8.044284754519,-8.045593226413,-8.046898243609,
	-8.048199815240,-8.049497950433,-8.050792658319,-8.052083948023,-8.053371828667,
	-8.054656309372,-8.055937399256,-8.057215107433,-8.058489443013,-8.059760415103,
	-8.061028032805,-8.062292305218,-8.063553241434,-8.064810850542,-8.066065141626,
	-8.067316123763,-8.068563806026,-8.069808197480,-8.071049307185,-8.072287144196,
	-8.073521717559,-8.074753036314,-8.075981109494,-8.077205946124,-8.078427555222,
	-8.079645945799,-8.080861126855,-8.082073107386,-8.083281896375,-8.084487502799,
	-8.085689935627,-8.086889203815,-8.088085316313,-8.089278282061,-8.090468109988,
	-8.091654809013,-8.092838388046,-8.094018855986,-8.095196221722,-8.096370494130,
	-8.097541682078,-8.098709794422,-8.099874840005,-8.101036827660,-8.102195766209,
	-8.103351664460,-8.104504531210,-8.105654375245,-8.106801205336,-8.107945030243,
	-8.109085858714,-8.110223699483,-8.111358561271,-8.112490452785,-8.113619382721,
	-8.114745359759,-8.115868392566,-8.116988489796,-8.118105660089,-8.119219912070,
	-8.120331254349,-8.121439695524,-8.122545244176,-8.123647908872,-8.124747698166,
	-8.125844620594,-8.126938684680,-8.128029898929,-8.129118271835,-8.130203811873,
	-8.131286527504,-8.132366427173,-8.133443519309,-8.134517812325,-8.135589314619,
	-8.136658034571,-8.137723980546,-8.138787160891,-8.139847583940,-8.140905258006,
	-8.141960191387,-8.143012392367,-8.144061869208,-8.145108630158,-8.146152683448,
	-8.147194037291,-8.148232699883,-8.149268679402,-8.150301984009,-8.151332621848,
	-8.152360601043,-8.153385929704,-8.154408615921,-8.155428667765,-8.156446093290,
	-8.157460900534,-8.158473097515,-8.159482692231,-8.160489692665,-8.161494106779,
	-8.162495942520,-8.163495207813,-8.164491910566,-8.165486058668,-8.166477659990,
	-8.167466722383,-8.168453253681,-8.169437261698,-8.170418754229,-8.171397739051,
	-8.172374223921,-8.173348216576,-8.174319724738,-8.175288756104,-8.176255318357,
	-8.177219419158,-8.178181066149,-8.179140266953,-8.180097029175,-8.181051360397,
	-8.182003268185,-8.182952760084,-8.183899843620,-8.184844526299,-8.185786815608,
	-8.186726719013,-8.187664243963,-8.188599397884,-8.189532188185,-8.190462622254,
	-8.191390707459,-8.192316451150,-8.193239860654,-8.194160943281,-8.195079706321,
	-8.195996157042,-8.196910302694,-8.197822150507,-8.198731707690,-8.199638981433,
	-8.200543978905,-8.201446707257,-8.202347173618,-8.203245385097,-8.204141348786,
	-8.205035071753,-8.205926561049,-8.206815823702,-8.207702866724,-8.208587697103,
	-8.209470321809,-8.210350747792,-8.211228981981,-8.212105031287,-8.212978902597,
	-8.213850602783,-8.214720138693,-8.215587517156,-8.216452744983,-8.217315828961,
	-8.218176775861,-8.219035592432,-8.219892285402,-8.220746861482,-8.221599327360,
	-8.222449689706,-8.223297955168,-8.224144130376,-8.224988221939,-8.225830236447,
	-8.226670180469,-8.227508060554,-8.228343883233,-8.229177655014,-8.230009382387,
	-8.230839071823,-8.231666729771,-8.232492362661,-8.233315976904,-8.234137578892,
	-8.234957174993,-8.235774771560,-8.236590374924,-8.237403991396,-8.238215627269,
	-8.239025288814,-8.239832982284,-8.240638713913,-8.241442489913,-8.242244316479,
	-8.243044199784,-8.243842145984,-8.244638161214,-8.245432251589,-8.246224423205,
	-8.247014682140,-8.247803034451,-8.248589486176,-8.249374043335,-8.250156711925,
	-8.250937497929,-8.251716407306,-8.252493445999,-8.253268619929,-8.254041935001,
	-8.254813397099,-8.255583012088,-8.256350785814,-8.257116724104,-8.257880832767,
	-8.258643117592,-8.259403584348,-8.260162238789,-8.260919086645,-8.261674133631,
	-8.262427385442,-8.263178847754,-8.263928526224,-8.264676426492,-8.265422554178,
	-8.266166914884,-8.266909514192,-8.267650357667,-8.268389450856,-8.269126799285,
	-8.269862408465,-8.270596283887,-8.271328431022,-8.272058855325,-8.272787562233,
	-8.273514557163,-8.274239845515,-8.274963432671,-8.275685323994,-8.276405524830,
	-8.277124040506,-8.277840876332,-8.278556037600,-8.279269529583,-8.279981357537,
	-8.280691526701,-8.281400042295,-8.282106909522,-8.282812133567,-8.283515719598,
	-8.284217672764,-8.284917998198,-8.285616701015,-8.286313786312,-8.287009259170,
	-8.287703124651,-8.288395387801,-8.289086053648,-8.289775127203,-8.290462613460,
	-8.291148517396,-8.291832843971,-8.292515598127,-8.293196784789,-8.293876408867,
	-8.294554475252,-8.295230988819,-8.295905954428,-8.296579376918,-8.297251261114,
	-8.297921611826,-8.298590433844,-8.299257731943,-8.299923510881,-8.300587775401,
	-8.301250530228,-8.301911780071,-8.302571529622,-8.303229783559,-8.303886546541,
	-8.304541823212,-8.305195618201,-8.305847936119,-8.306498781561,-8.307148159108,
	-8.307796073323,-8.308442528755,-8.309087529935,-8.309731081378,-8.310373187587,
	-8.311013853045,-8.311653082221,-8.312290879569,-8.312927249526,-8.313562196516,
	-8.314195724943,-8.314827839201,-8.315458543665,-8.316087842695,-8.316715740636,
	-8.317342241820,-8.317967350560,-8.318591071157,-8.319213407895,-8.319834365043,
	-8.320453946857,-8.321072157575,-8.321689001422,-8.322304482609,-8.322918605330,
	-8.323531373765,-8.324142792080,-8.324752864426,-8.325361594938,-8.325968987739,
	-8.326575046935,-8.327179776619,-8.327783180869,-8.328385263750,-8.328986029309,
	-8.329585481582,-8.330183624591,-8.330780462341,-8.331375998826,-8.331970238023,
	-8.332563183897,-8.333154840397,-8.333745211461,-8.334334301011,-8.334922112955,
	-8.335508651188,-8.336093919590,-8.336677922029,-8.337260662359,-8.337842144418,
	-8.338422372033,-8.339001349017,-8.339579079169,-8.340155566275,-8.340730814106,
	-8.341304826422,-8.341877606968,-8.342449159477,-8.343019487667,-8.343588595244,
	-8.344156485901,-8.344723163318,-8.345288631161,-8.345852893083,-8.346415952726,
	-8.346977813716,-8.347538479670,-8.348097954187,-8.348656240859,-8.349213343261,
	-8.349769264956,-8.350324009497,-8.350877580422,-8.351429981256,-8.351981215512,
	-8.352531286693,-8.353080198286,-8.353627953768,-8.354174556602,-8.354720010240,
	-8.355264318121,-8.355807483673,-8.356349510309,-8.356890401434,-8.357430160436,
	-8.357968790697,-8.358506295580,-8.359042678443,-8.359577942627,-8.360112091464,
	-8.360645128272,-8.361177056358,-8.361707879020,-8.362237599540,-8.362766221190,
	-8.363293747232,-8.363820180915,-8.364345525476,-8.364869784140,-8.365392960124,
	-8.365915056630,-8.366436076851,-8.366956023966,-8.367474901145,-8.367992711546,
	-8.368509458316,-8.369025144591,-8.369539773496,-8.370053348143,-8.370565871636,
	-8.371077347067,-8.371587777515,-8.372097166051,-8.372605515733,-8.373112829609,
	-8.373619110718,-8.374124362084,-8.374628586724,-8.375131787643,-8.375633967836,
	-8.376135130286,-8.376635277967,-8.377134413842,-8.377632540863,-8.378129661971,
	-8.378625780099,-8.379120898168,-8.379615019088,-8.380108145761,-8.380600281076,
	-8.381091427914,-8.381581589144,-8.382070767628,-8.382558966213,-8.383046187741,
	-8.383532435040,-8.384017710932,-8.384502018225,-8.384985359719,-8.385467738204,
	-8.385949156462,-8.386429617261,-8.386909123364,-8.387387677520,-8.387865282472,
	-8.388341940950,-8.388817655677,-8.389292429366,-8.389766264719,-8.390239164430,
	-8.390711131183,-8.391182167653,-8.391652276504,-8.392121460392,-8.392589721965,
	-8.393057063859,-8.393523488702,-8.393988999114,-8.394453597703,-8.394917287070,
	-8.395380069807,-8.395841948496,-8.396302925710,-8.396763004013,-8.397222185961,
	-8.397680474099,-8.398137870966,-8.398594379090,-8.399050000991,-8.399504739179,
	-8.399958596157,-8.400411574418,-8.400863676447,-8.401314904721,-8.401765261705,
	-8.402214749860,-8.402663371635,-8.403111129473,-8.403558025806,-8.404004063059,
	-8.404449243649,-8.404893569983,-8.405337044461,-8.405779669474,-8.406221447405,
	-8.406662380629,-8.407102471512,-8.407541722412,-8.407980135679,-8.408417713655,
	-8.408854458674,-8.409290373060,-8.409725459133,-8.410159719200,-8.410593155564,
	-8.411025770519,-8.411457566349,-8.411888545333,-8.412318709740,-8.412748061833,
	-8.413176603865,-8.413604338083,-8.414031266725,-8.414457392023,-8.414882716200,
	-8.415307241471,-8.415730970043,-8.416153904119,-8.416576045889,-8.416997397540,
	-8.417417961248,-8.417837739185,-8.418256733512,-8.418674946385,-8.419092379952,
	-8.419509036354,-8.419924917723,-8.420340026185,-8.420754363859,-8.421167932857,
	-8.421580735281,-8.421992773229,-8.422404048791,-8.422814564049,-8.423224321078,
	-8.423633321947,-8.424041568716,-8.424449063441,-8.424855808168,-8.425261804936,
	-8.425667055781,-8.426071562727,-8.426475327794,-8.426878352994,-8.427280640333,
	-8.427682191811,-8.428083009418,-8.428483095139,-8.428882450955,-8.429281078835,
	-8.429678980745,-8.430076158644,-8.430472614483,-8.430868350207,-8.431263367755,
	-8.431657669058,-8.432051256042,-8.432444130626,-8.432836294722,-8.433227750236,
	-8.433618499067,-8.434008543109,-8.434397884247,-8.434786524363,-8.435174465330,
	-8.435561709015,-8.435948257281,-8.436334111981,-8.436719274965,-8.437103748075,
	-8.437487533147,-8.437870632012,-8.438253046494,-8.438634778410,-8.439015829572,
	-8.439396201785,-8.439775896851,-8.440154916561,-8.440533262703,-8.440910937060,
	-8.441287941406,-8.441664277511,-8.442039947140,-8.442414952049,-8.442789293991,
	-8.443162974711,-8.443535995951,-8.443908359444,-8.444280066919,-8.444651120099,
	-8.445021520701,-8.445391270437,-8.445760371012,-8.446128824126,-8.446496631474,
	-8.446863794745,-8.447230315621,-8.447596195780,-8.447961436894,-8.448326040630,
	-8.448690008648,-8.449053342605,-8.449416044148,-8.449778114925,-8.450139556572,
	-8.450500370724,-8.450860559009,-8.451220123050,-8.451579064464,-8.451937384863,
	-8.452295085855,-8.452652169040,-8.453008636014,-8.453364488370,-8.453719727692,
	-8.454074355560,-8.454428373551,-8.454781783234,-8.455134586175,-8.455486783932,
	-8.455838378061,-8.456189370111,-8.456539761628,-8.456889554149,-8.457238749210,
	-8.457587348340,-8.457935353063,-8.458282764899,-8.458629585362,-8.458975815962,
	-8.459321458203,-8.459666513585,-8.460010983602,-8.460354869745,-8.460698173498,
	-8.461040896342,-8.461383039751,-8.461724605198,-8.462065594146,-8.462406008058,
	-8.462745848389,-8.463085116591,-8.463423814111,-8.463761942391,-8.464099502869,
	-8.464436496977,-8.464772926144,-8.465108791792,-8.465444095342,-8.465778838207,
	-8.466113021797,-8.466446647517,-8.466779716769,-8.467112230948,-8.467444191445,
	-8.467775599649,-8.468106456942,-8.468436764702,-8.468766524303,-8.469095737115,
	-8.469424404502,-8.469752527825,-8.470080108441,-8.470407147701,-8.470733646953,
	-8.471059607541,-8.471385030803,-8.471709918074,-8.472034270684,-8.472358089960,
	-8.472681377224,-8.473004133793,-8.473326360981,-8.473648060097,-8.473969232446,
	-8.474289879330,-8.474610002045,-8.474929601884,-8.475248680135,-8.475567238084,
	-8.475885277010,-8.476202798190,-8.476519802896
	}
};

double always_inline s04_stage4clip(double x) {
    double f = fabs(x);
    f = f * s04_stage4_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s04_stage4_table.data[0];
    } else if (i >= s04_stage4_table.size-1) {
        f = s04_stage4_table.data[s04_stage4_table.size-1];
    } else {
        f -= i;
        f = s04_stage4_table.data[i]*(1-f) + s04_stage4_table.data[i+1]*f;
    }
    return copysign(f, x);
}


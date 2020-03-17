
// s01_stage1_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  45.144213
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
	0,0.742237,204.7,2048, {
	0.000000000000,0.007190529679,0.014137598618,0.020852224146,0.027344909186,
	0.033625666510,0.039704041850,0.045589135907,0.051289625322,0.056813782650,
	0.062169495386,0.067364284099,0.072405319692,0.077299439859,0.082053164758,
	0.086672711936,0.091164010562,0.095532714972,0.099784217585,0.103923661204,
	0.107955950732,0.111885764341,0.115717564113,0.119455606171,0.123103950342,
	0.126666469355,0.130146857611,0.133548639539,0.136875177552,0.140129679633,
	0.143315206566,0.146434678817,0.149490883099,0.152486478626,0.155424003069,
	0.158305878234,0.161134415472,0.163911820838,0.166640200001,0.169321562927,
	0.171957828338,0.174550827968,0.177102310614,0.179613945995,0.182087328433,
	0.184523980361,0.186925355666,0.189292842871,0.191627768172,0.193931398334,
	0.196204943444,0.198449559543,0.200666351127,0.202856373537,0.205020635234,
	0.207160099964,0.209275688832,0.211368282264,0.213438721892,0.215487812338,
	0.217516322926,0.219524989303,0.221514514991,0.223485572866,0.225438806564,
	0.227374831828,0.229294237781,0.231197588154,0.233085422443,0.234958257021,
	0.236816586193,0.238660883208,0.240491601213,0.242309174176,0.244114017753,
	0.245906530126,0.247687092793,0.249456071325,0.251213816092,0.252960662946,
	0.254696933877,0.256422937644,0.258138970365,0.259845316089,0.261542247341,
	0.263230025632,0.264908901961,0.266579117276,0.268240902932,0.269894481112,
	0.271540065239,0.273177860361,0.274808063527,0.276430864139,0.278046444287,
	0.279654979077,0.281256636932,0.282851579889,0.284439963879,0.286021938990,
	0.287597649725,0.289167235245,0.290730829597,0.292288561939,0.293840556747,
	0.295386934023,0.296927809478,0.298463294722,0.299993497437,0.301518521543,
	0.303038467358,0.304553431751,0.306063508286,0.307568787360,0.309069356337,
	0.310565299673,0.312056699038,0.313543633428,0.315026179280,0.316504410571,
	0.317978398924,0.319448213700,0.320913922089,0.322375589201,0.323833278147,
	0.325287050117,0.326736964461,0.328183078757,0.329625448883,0.331064129082,
	0.332499172029,0.333930628886,0.335358549365,0.336782981781,0.338203973105,
	0.339621569017,0.341035813950,0.342446751143,0.343854422679,0.345258869529,
	0.346660131597,0.348058247751,0.349453255869,0.350845192866,0.352234094736,
	0.353619996577,0.355002932630,0.356382936300,0.357760040193,0.359134276140,
	0.360505675220,0.361874267790,0.363240083509,0.364603151357,0.365963499660,
	0.367321156112,0.368676147792,0.370028501187,0.371378242210,0.372725396216,
	0.374069988021,0.375412041919,0.376751581695,0.378088630644,0.379423211583,
	0.380755346867,0.382085058400,0.383412367650,0.384737295661,0.386059863065,
	0.387380090093,0.388697996587,0.390013602009,0.391326925455,0.392637985659,
	0.393946801008,0.395253389550,0.396557768998,0.397859956747,0.399159969873,
	0.400457825149,0.401753539046,0.403047127747,0.404338607148,0.405627992866,
	0.406915300250,0.408200544382,0.409483740087,0.410764901935,0.412044044252,
	0.413321181121,0.414596326388,0.415869493671,0.417140696359,0.418409947622,
	0.419677260413,0.420942647474,0.422206121340,0.423467694341,0.424727378610,
	0.425985186085,0.427241128512,0.428495217450,0.429747464276,0.430997880185,
	0.432246476197,0.433493263159,0.434738251745,0.435981452467,0.437222875670,
	0.438462531539,0.439700430102,0.440936581231,0.442170994647,0.443403679922,
	0.444634646478,0.445863903597,0.447091460415,0.448317325932,0.449541509009,
	0.450764018372,0.451984862616,0.453204050205,0.454421589474,0.455637488632,
	0.456851755766,0.458064398838,0.459275425692,0.460484844052,0.461692661527,
	0.462898885610,0.464103523683,0.465306583016,0.466508070769,0.467707993995,
	0.468906359640,0.470103174547,0.471298445455,0.472492179001,0.473684381723,
	0.474875060061,0.476064220356,0.477251868856,0.478438011712,0.479622654984,
	0.480805804640,0.481987466556,0.483167646522,0.484346350238,0.485523583319,
	0.486699351292,0.487873659603,0.489046513614,0.490217918603,0.491387879771,
	0.492556402237,0.493723491040,0.494889151146,0.496053387441,0.497216204736,
	0.498377607768,0.499537601202,0.500696189628,0.501853377566,0.503009169466,
	0.504163569708,0.505316582601,0.506468212390,0.507618463250,0.508767339292,
	0.509914844560,0.511060983036,0.512205758636,0.513349175215,0.514491236565,
	0.515631946418,0.516771308443,0.517909326254,0.519046003402,0.520181343383,
	0.521315349632,0.522448025531,0.523579374403,0.524709399520,0.525838104094,
	0.526965491288,0.528091564208,0.529216325911,0.530339779399,0.531461927624,
	0.532582773488,0.533702319842,0.534820569488,0.535937525179,0.537053189621,
	0.538167565471,0.539280655338,0.540392461788,0.541502987337,0.542612234459,
	0.543720205582,0.544826903088,0.545932329317,0.547036486567,0.548139377090,
	0.549241003099,0.550341366762,0.551440470210,0.552538315530,0.553634904769,
	0.554730239935,0.555824322997,0.556917155885,0.558008740489,0.559099078664,
	0.560188172225,0.561276022950,0.562362632582,0.563448002827,0.564532135355,
	0.565615031800,0.566696693761,0.567777122805,0.568856320461,0.569934288227,
	0.571011027566,0.572086539908,0.573160826652,0.574233889164,0.575305728775,
	0.576376346789,0.577445744476,0.578513923076,0.579580883798,0.580646627821,
	0.581711156294,0.582774470337,0.583836571041,0.584897459466,0.585957136646,
	0.587015603585,0.588072861260,0.589128910620,0.590183752586,0.591237388054,
	0.592289817890,0.593341042936,0.594391064008,0.595439881894,0.596487497358,
	0.597533911137,0.598579123946,0.599623136473,0.600665949380,0.601707563307,
	0.602747978870,0.603787196660,0.604825217244,0.605862041167,0.606897668951,
	0.607932101095,0.608965338073,0.609997380340,0.611028228328,0.612057882445,
	0.613086343080,0.614113610599,0.615139685347,0.616164567647,0.617188257804,
	0.618210756100,0.619232062796,0.620252178135,0.621271102339,0.622288835609,
	0.623305378128,0.624320730058,0.625334891544,0.626347862710,0.627359643661,
	0.628370234485,0.629379635250,0.630387846006,0.631394866785,0.632400697600,
	0.633405338449,0.634408789308,0.635411050140,0.636412120887,0.637412001476,
	0.638410691816,0.639408191799,0.640404501302,0.641399620182,0.642393548284,
	0.643386285433,0.644377831439,0.645368186098,0.646357349186,0.647345320468,
	0.648332099689,0.649317686583,0.650302080865,0.651285282236,0.652267290383,
	0.653248104978,0.654227725676,0.655206152119,0.656183383936,0.657159420738,
	0.658134262124,0.659107907680,0.660080356975,0.661051609565,0.662021664994,
	0.662990522790,0.663958182469,0.664924643532,0.665889905468,0.666853967751,
	0.667816829845,0.668778491197,0.669738951244,0.670698209408,0.671656265100,
	0.672613117717,0.673568766645,0.674523211255,0.675476450908,0.676428484951,
	0.677379312720,0.678328933538,0.679277346718,0.680224551557,0.681170547344,
	0.682115333354,0.683058908851,0.684001273089,0.684942425307,0.685882364735,
	0.686821090592,0.687758602083,0.688694898405,0.689629978741,0.690563842266,
	0.691496488142,0.692427915519,0.693358123538,0.694287111330,0.695214878013,
	0.696141422695,0.697066744474,0.697990842438,0.698913715663,0.699835363217,
	0.700755784154,0.701674977521,0.702592942353,0.703509677676,0.704425182506,
	0.705339455848,0.706252496697,0.707164304039,0.708074876850,0.708984214096,
	0.709892314733,0.710799177708,0.711704801957,0.712609186407,0.713512329978,
	0.714414231577,0.715314890104,0.716214304447,0.717112473488,0.718009396097,
	0.718905071136,0.719799497458,0.720692673907,0.721584599317,0.722475272513,
	0.723364692313,0.724252857523,0.725139766943,0.726025419363,0.726909813562,
	0.727792948314,0.728674822383,0.729555434523,0.730434783480,0.731312867992,
	0.732189686789,0.733065238590,0.733939522109,0.734812536048,0.735684279103,
	0.736554749961,0.737423947301,0.738291869792,0.739158516098,0.740023884871,
	0.740887974757,0.741750784395,0.742612312412,0.743472557432,0.744331518066,
	0.745189192921,0.746045580593,0.746900679671,0.747754488738,0.748607006367,
	0.749458231123,0.750308161565,0.751156796242,0.752004133696,0.752850172463,
	0.753694911069,0.754538348034,0.755380481868,0.756221311077,0.757060834155,
	0.757899049593,0.758735955871,0.759571551464,0.760405834837,0.761238804450,
	0.762070458753,0.762900796191,0.763729815202,0.764557514213,0.765383891647,
	0.766208945920,0.767032675438,0.767855078601,0.768676153804,0.769495899431,
	0.770314313862,0.771131395468,0.771947142614,0.772761553657,0.773574626948,
	0.774386360829,0.775196753638,0.776005803703,0.776813509347,0.777619868886,
	0.778424880627,0.779228542874,0.780030853919,0.780831812052,0.781631415554,
	0.782429662699,0.783226551754,0.784022080981,0.784816248633,0.785609052958,
	0.786400492197,0.787190564584,0.787979268346,0.788766601704,0.789552562872,
	0.790337150058,0.791120361464,0.791902195284,0.792682649706,0.793461722912,
	0.794239413078,0.795015718371,0.795790636955,0.796564166985,0.797336306612,
	0.798107053978,0.798876407222,0.799644364473,0.800410923857,0.801176083492,
	0.801939841489,0.802702195955,0.803463144990,0.804222686687,0.804980819134,
	0.805737540413,0.806492848598,0.807246741760,0.807999217961,0.808750275260,
	0.809499911707,0.810248125348,0.810994914222,0.811740276364,0.812484209801,
	0.813226712555,0.813967782642,0.814707418074,0.815445616853,0.816182376981,
	0.816917696449,0.817651573245,0.818384005351,0.819114990745,0.819844527395,
	0.820572613268,0.821299246323,0.822024424514,0.822748145790,0.823470408095,
	0.824191209365,0.824910547533,0.825628420527,0.826344826268,0.827059762673,
	0.827773227652,0.828485219112,0.829195734954,0.829904773072,0.830612331357,
	0.831318407695,0.832022999966,0.832726106045,0.833427723803,0.834127851103,
	0.834826485808,0.835523625771,0.836219268844,0.836913412872,0.837606055696,
	0.838297195152,0.838986829072,0.839674955282,0.840361571604,0.841046675856,
	0.841730265850,0.842412339395,0.843092894294,0.843771928347,0.844449439348,
	0.845125425089,0.845799883355,0.846472811929,0.847144208587,0.847814071104,
	0.848482397248,0.849149184784,0.849814431475,0.850478135076,0.851140293340,
	0.851800904017,0.852459964852,0.853117473586,0.853773427956,0.854427825697,
	0.855080664537,0.855731942204,0.856381656420,0.857029804904,0.857676385372,
	0.858321395536,0.858964833104,0.859606695782,0.860246981272,0.860885687272,
	0.861522811479,0.862158351584,0.862792305278,0.863424670245,0.864055444170,
	0.864684624732,0.865312209610,0.865938196477,0.866562583006,0.867185366866,
	0.867806545724,0.868426117243,0.869044079085,0.869660428909,0.870275164372,
	0.870888283128,0.871499782829,0.872109661125,0.872717915663,0.873324544090,
	0.873929544049,0.874532913182,0.875134649129,0.875734749527,0.876333212014,
	0.876930034224,0.877525213791,0.878118748345,0.878710635518,0.879300872938,
	0.879889458233,0.880476389030,0.881061662953,0.881645277627,0.882227230676,
	0.882807519722,0.883386142386,0.883963096289,0.884538379053,0.885111988295,
	0.885683921637,0.886254176696,0.886822751091,0.887389642441,0.887954848363,
	0.888518366476,0.889080194399,0.889640329749,0.890198770145,0.890755513206,
	0.891310556551,0.891863897800,0.892415534574,0.892965464494,0.893513685182,
	0.894060194260,0.894604989352,0.895148068084,0.895689428081,0.896229066970,
	0.896766982382,0.897303171945,0.897837633292,0.898370364057,0.898901361874,
	0.899430624382,0.899958149220,0.900483934028,0.901007976452,0.901530274137,
	0.902050824732,0.902569625888,0.903086675259,0.903601970502,0.904115509277,
	0.904627289246,0.905137308075,0.905645563434,0.906152052996,0.906656774436,
	0.907159725435,0.907660903676,0.908160306847,0.908657932639,0.909153778749,
	0.909647842877,0.910140122727,0.910630616008,0.911119320434,0.911606233724,
	0.912091353602,0.912574677795,0.913056204039,0.913535930073,0.914013853641,
	0.914489972495,0.914964284389,0.915436787087,0.915907478357,0.916376355974,
	0.916843417718,0.917308661378,0.917772084746,0.918233685624,0.918693461821,
	0.919151411150,0.919607531435,0.920061820505,0.920514276198,0.920964896358,
	0.921413678838,0.921860621500,0.922305722213,0.922748978854,0.923190389310,
	0.923629951475,0.924067663253,0.924503522557,0.924937527308,0.925369675438,
	0.925799964888,0.926228393609,0.926654959559,0.927079660711,0.927502495044,
	0.927923460550,0.928342555230,0.928759777097,0.929175124173,0.929588594493,
	0.930000186103,0.930409897060,0.930817725431,0.931223669299,0.931627726755,
	0.932029895903,0.932430174862,0.932828561760,0.933225054740,0.933619651957,
	0.934012351580,0.934403151790,0.934792050783,0.935179046766,0.935564137964,
	0.935947322613,0.936328598964,0.936707965283,0.937085419850,0.937460960960,
	0.937834586924,0.938206296067,0.938576086729,0.938943957269,0.939309906057,
	0.939673931483,0.940036031952,0.940396205885,0.940754451720,0.941110767912,
	0.941465152933,0.941817605272,0.942168123437,0.942516705952,0.942863351359,
	0.943208058220,0.943550825113,0.943891650636,0.944230533405,0.944567472057,
	0.944902465245,0.945235511643,0.945566609946,0.945895758867,0.946222957140,
	0.946548203518,0.946871496777,0.947192835710,0.947512219135,0.947829645889,
	0.948145114831,0.948458624840,0.948770174819,0.949079763692,0.949387390406,
	0.949693053929,0.949996753253,0.950298487392,0.950598255384,0.950896056291,
	0.951191889196,0.951485753209,0.951777647461,0.952067571110,0.952355523336,
	0.952641503345,0.952925510368,0.953207543662,0.953487602507,0.953765686209,
	0.954041794103,0.954315925546,0.954588079923,0.954858256646,0.955126455152,
	0.955392674907,0.955656915403,0.955919176159,0.956179456722,0.956437756666,
	0.956694075595,0.956948413139,0.957200768958,0.957451142740,0.957699534201,
	0.957945943087,0.958190369175,0.958432812267,0.958673272200,0.958911748836,
	0.959148242072,0.959382751830,0.959615278068,0.959845820770,0.960074379955,
	0.960300955670,0.960525547995,0.960748157042,0.960968782953,0.961187425904,
	0.961404086101,0.961618763784,0.961831459226,0.962042172732,0.962250904639,
	0.962457655319,0.962662425175,0.962865214648,0.963066024207,0.963264854359,
	0.963461705643,0.963656578635,0.963849473941,0.964040392207,0.964229334110,
	0.964416300362,0.964601291713,0.964784308946,0.964965352881,0.965144424372,
	0.965321524311,0.965496653623,0.965669813273,0.965841004260,0.966010227619,
	0.966177484423,0.966342775783,0.966506102843,0.966667466789,0.966826868840,
	0.966984310255,0.967139792330,0.967293316398,0.967444883831,0.967594496038,
	0.967742154466,0.967887860601,0.968031615967,0.968173422127,0.968313280680,
	0.968451193268,0.968587161569,0.968721187299,0.968853272216,0.968983418115,
	0.969111626831,0.969237900238,0.969362240250,0.969484648819,0.969605127939,
	0.969723679642,0.969840306000,0.969955009124,0.970067791167,0.970178654321,
	0.970287600817,0.970394632928,0.970499752965,0.970602963281,0.970704266269,
	0.970803664361,0.970901160031,0.970996755793,0.971090454200,0.971182257848,
	0.971272169371,0.971360191445,0.971446326786,0.971530578150,0.971612948336,
	0.971693440181,0.971772056563,0.971848800402,0.971923674656,0.971996682326,
	0.972067826453,0.972137110117,0.972204536441,0.972270108586,0.972333829756,
	0.972395703192,0.972455732179,0.972513920040,0.972570270139,0.972624785881,
	0.972677470709,0.972728328108,0.972777361603,0.972824574757,0.972869971176,
	0.972913554503,0.972955328423,0.972995296658,0.973033462972,0.973069831167,
	0.973104405086,0.973137188608,0.973168185655,0.973197400185,0.973224836197,
	0.973250497726,0.973274388850,0.973296513680,0.973316876370,0.973335481110,
	0.973352332129,0.973367433692,0.973380790104,0.973392405706,0.973402284877,
	0.973410432035,0.973416851631,0.973421548156,0.973424526137,0.973425790137,
	0.973425344756,0.973423194630,0.973419344429,0.973413798862,0.973406562670,
	0.973397640632,0.973387037562,0.973374758305,0.973360807746,0.973345190799,
	0.973327912417,0.973308977583,0.973288391316,0.973266158667,0.973242284720,
	0.973216774594,0.973189633436,0.973160866431,0.973130478791,0.973098475762,
	0.973064862623,0.973029644680,0.972992827274,0.972954415774,0.972914415580,
	0.972872832122,0.972829670859,0.972784937282,0.972738636906,0.972690775281,
	0.972641357979,0.972590390605,0.972537878789,0.972483828190,0.972428244492,
	0.972371133408,0.972312500677,0.972252352062,0.972190693353,0.972127530367,
	0.972062868943,0.971996714947,0.971929074267,0.971859952817,0.971789356534,
	0.971717291377,0.971643763330,0.971568778396,0.971492342603,0.971414462000,
	0.971335142656,0.971254390663,0.971172212131,0.971088613193,0.971003599999,
	0.970917178719,0.970829355543,0.970740136679,0.970649528353,0.970557536808,
	0.970464168306,0.970369429124,0.970273325556,0.970175863913,0.970077050522,
	0.969976891723,0.969875393873,0.969772563342,0.969668406515,0.969562929791,
	0.969456139580,0.969348042308,0.969238644410,0.969127952335,0.969015972543,
	0.968902711505,0.968788175704,0.968672371629,0.968555305785,0.968436984681,
	0.968317414838,0.968196602784,0.968074555055,0.967951278198,0.967826778762,
	0.967701063307,0.967574138397,0.967446010604,0.967316686503,0.967186172676,
	0.967054475710,0.966921602195,0.966787558725,0.966652351898,0.966515988315,
	0.966378474580,0.966239817298,0.966100023076,0.965959098524,0.965817050250,
	0.965673884865,0.965529608980,0.965384229204,0.965237752147,0.965090184416,
	0.964941532618,0.964791803357,0.964641003237,0.964489138856,0.964336216811,
	0.964182243694,0.964027226094,0.963871170596,0.963714083779,0.963555972218,
	0.963396842482,0.963236701134,0.963075554731,0.962913409823,0.962750272953,
	0.962586150657,0.962421049462,0.962254975888,0.962087936446,0.961919937639,
	0.961750985958,0.961581087888,0.961410249902,0.961238478461,0.961065780020,
	0.960892161017,0.960717627884,0.960542187038,0.960365844884,0.960188607817,
	0.960010482216,0.959831474449,0.959651590870,0.959470837820,0.959289221624,
	0.959106748595,0.958923425029,0.958739257208,0.958554251400,0.958368413854,
	0.958181750808,0.957994268479,0.957805973069,0.957616870765,0.957426967735,
	0.957236270131,0.957044784085,0.956852515713,0.956659471112,0.956465656362,
	0.956271077523,0.956075740635,0.955879651721,0.955682816782,0.955485241803,
	0.955286932745,0.955087895551,0.954888136142,0.954687660421,0.954486474267,
	0.954284583539,0.954081994077,0.953878711694,0.953674742188,0.953470091328,
	0.953264764867,0.953058768531,0.952852108026,0.952644789035,0.952436817216,
	0.952228198207,0.952018937619,0.951809041043,0.951598514043,0.951387362163,
	0.951175590919,0.950963205805,0.950750212290,0.950536615820,0.950322421814,
	0.950107635668,0.949892262751,0.949676308410,0.949459777964,0.949242676708,
	0.949025009912,0.948806782818,0.948588000646,0.948368668587,0.948148791807,
	0.947928375448,0.947707424622,0.947485944419,0.947263939899,0.947041416097,
	0.946818378024,0.946594830660,0.946370778961,0.946146227855,0.945921182246,
	0.945695647007,0.945469626988,0.945243127008,0.945016151862,0.944788706318,
	0.944560795114,0.944332422964,0.944103594552,0.943874314536,0.943644587548,
	0.943414418191,0.943183811040,0.942952770644,0.942721301523,0.942489408172,
	0.942257095057,0.942024366615,0.941791227258,0.941557681370,0.941323733306,
	0.941089387394,0.940854647936,0.940619519205,0.940384005446,0.940148110878,
	0.939911839691,0.939675196049,0.939438184088,0.939200807915,0.938963071612,
	0.938724979232,0.938486534801,0.938247742317,0.938008605753,0.937769129052,
	0.937529316131,0.937289170880,0.937048697161,0.936807898809,0.936566779633,
	0.936325343414,0.936083593906,0.935841534837,0.935599169907,0.935356502789,
	0.935113537131,0.934870276553,0.934626724649,0.934382884985,0.934138761102,
	0.933894356515,0.933649674711,0.933404719152,0.933159493274,0.932914000485,
	0.932668244169,0.932422227683,0.932175954359,0.931929427502,0.931682650393,
	0.931435626285,0.931188358408,0.930940849966,0.930693104135,0.930445124070,
	0.930196912897,0.929948473720,0.929699809616,0.929450923638,0.929201818815,
	0.928952498150,0.928702964621,0.928453221184,0.928203270768,0.927953116280,
	0.927702760601,0.927452206589,0.927201457079,0.926950514880,0.926699382778,
	0.926448063538,0.926196559897,0.925944874573,0.925693010259,0.925440969623,
	0.925188755313,0.924936369953,0.924683816144,0.924431096465,0.924178213472,
	0.923925169698,0.923671967654,0.923418609831,0.923165098695,0.922911436691,
	0.922657626244,0.922403669755,0.922149569603,0.921895328150,0.921640947731,
	0.921386430663,0.921131779243,0.920876995743,0.920622082420,0.920367041504,
	0.920111875209,0.919856585728,0.919601175232,0.919345645872,0.919089999781,
	0.918834239071,0.918578365833,0.918322382141,0.918066290047,0.917810091584,
	0.917553788768,0.917297383593,0.917040878035,0.916784274053,0.916527573584,
	0.916270778550,0.916013890850,0.915756912370,0.915499844973,0.915242690506,
	0.914985450800,0.914728127664,0.914470722892,0.914213238260,0.913955675527,
	0.913698036434,0.913440322704,0.913182536044,0.912924678145,0.912666750679,
	0.912408755302,0.912150693655,0.911892567361,0.911634378027,0.911376127244,
	0.911117816587,0.910859447614,0.910601021869,0.910342540879,0.910084006156,
	0.909825419196,0.909566781481,0.909308094475,0.909049359631,0.908790578383,
	0.908531752153,0.908272882347,0.908013970356,0.907755017558,0.907496025317,
	0.907236994979,0.906977927880,0.906718825340,0.906459688666,0.906200519151,
	0.905941318074,0.905682086700,0.905422826281,0.905163538057,0.904904223254,
	0.904644883083,0.904385518745,0.904126131426,0.903866722300,0.903607292530,
	0.903347843263,0.903088375636,0.902828890773,0.902569389787,0.902309873777,
	0.902050343832,0.901790801027,0.901531246426,0.901271681082,0.901012106037,
	0.900752522320,0.900492930949,0.900233332931,0.899973729262,0.899714120928,
	0.899454508901,0.899194894146,0.898935277614,0.898675660248,0.898416042978,
	0.898156426725,0.897896812400,0.897637200903,0.897377593124,0.897117989943,
	0.896858392231,0.896598800846,0.896339216640,0.896079640454,0.895820073118,
	0.895560515455,0.895300968277,0.895041432386,0.894781908577,0.894522397634,
	0.894262900332,0.894003417440,0.893743949714,0.893484497903,0.893225062748,
	0.892965644981,0.892706245325,0.892446864494,0.892187503196,0.891928162128,
	0.891668841981,0.891409543436,0.891150267167,0.890891013841,0.890631784116,
	0.890372578641,0.890113398060,0.889854243007,0.889595114111,0.889336011990,
	0.889076937259,0.888817890522,0.888558872376,0.888299883414,0.888040924219,
	0.887781995368,0.887523097430,0.887264230969,0.887005396541,0.886746594695,
	0.886487825975,0.886229090915,0.885970390047,0.885711723893,0.885453092970,
	0.885194497789,0.884935938854,0.884677416662,0.884418931707,0.884160484474,
	0.883902075443,0.883643705087,0.883385373876,0.883127082271,0.882868830729,
	0.882610619701,0.882352449632,0.882094320962,0.881836234125,0.881578189551,
	0.881320187661,0.881062228876,0.880804313606,0.880546442261,0.880288615243,
	0.880030832948,0.879773095770,0.879515404096,0.879257758308,0.879000158784,
	0.878742605896,0.878485100014,0.878227641499,0.877970230711,0.877712868003,
	0.877455553725,0.877198288223,0.876941071836,0.876683904901,0.876426787749,
	0.876169720709,0.875912704102,0.875655738248,0.875398823462,0.875141960055,
	0.874885148332,0.874628388597,0.874371681149,0.874115026281,0.873858424285,
	0.873601875448,0.873345380052,0.873088938377,0.872832550699,0.872576217289,
	0.872319938416,0.872063714345,0.871807545337,0.871551431649,0.871295373536,
	0.871039371248,0.870783425033,0.870527535135,0.870271701794,0.870015925249,
	0.869760205732,0.869504543475,0.869248938707,0.868993391651,0.868737902529,
	0.868482471560,0.868227098960,0.867971784940,0.867716529711,0.867461333480,
	0.867206196449,0.866951118820,0.866696100792,0.866441142559,0.866186244314,
	0.865931406247,0.865676628546,0.865421911394,0.865167254975,0.864912659467,
	0.864658125046,0.864403651889,0.864149240165,0.863894890045,0.863640601695,
	0.863386375281,0.863132210963,0.862878108902,0.862624069255,0.862370092177,
	0.862116177822,0.861862326340,0.861608537878,0.861354812584,0.861101150601,
	0.860847552072,0.860594017136,0.860340545931,0.860087138593,0.859833795254,
	0.859580516048,0.859327301103,0.859074150547,0.858821064506,0.858568043104,
	0.858315086462,0.858062194702,0.857809367940,0.857556606293,0.857303909877,
	0.857051278803,0.856798713183,0.856546213126,0.856293778740,0.856041410131,
	0.855789107403,0.855536870658,0.855284699998,0.855032595522,0.854780557328,
	0.854528585512,0.854276680168,0.854024841390,0.853773069269,0.853521363896,
	0.853269725358,0.853018153744,0.852766649140,0.852515211628,0.852263841292,
	0.852012538215,0.851761302475,0.851510134152,0.851259033324,0.851008000065,
	0.850757034452,0.850506136558,0.850255306455,0.850004544214,0.849753849905,
	0.849503223596,0.849252665356,0.849002175250,0.848751753343,0.848501399698,
	0.848251114380,0.848000897449,0.847750748966,0.847500668990,0.847250657579,
	0.847000714791,0.846750840681,0.846501035306,0.846251298718,0.846001630971,
	0.845752032117,0.845502502207,0.845253041291,0.845003649418,0.844754326636,
	0.844505072993,0.844255888534,0.844006773305,0.843757727350,0.843508750712,
	0.843259843436,0.843011005561,0.842762237129,0.842513538180,0.842264908754,
	0.842016348888,0.841767858620,0.841519437987,0.841271087024,0.841022805767,
	0.840774594251,0.840526452508,0.840278380572,0.840030378475,0.839782446248,
	0.839534583922,0.839286791526,0.839039069089,0.838791416642,0.838543834210,
	0.838296321821,0.838048879502,0.837801507278,0.837554205175,0.837306973217,
	0.837059811428,0.836812719831,0.836565698448,0.836318747302,0.836071866414,
	0.835825055805,0.835578315494,0.835331645502,0.835085045848,0.834838516550,
	0.834592057625,0.834345669092,0.834099350967,0.833853103266,0.833606926006,
	0.833360819200,0.833114782865,0.832868817014,0.832622921661,0.832377096818,
	0.832131342500,0.831885658718,0.831640045483,0.831394502808,0.831149030702,
	0.830903629177,0.830658298241,0.830413037906,0.830167848179,0.829922729069,
	0.829677680585,0.829432702734,0.829187795524,0.828942958961,0.828698193053,
	0.828453497804,0.828208873221,0.827964319310,0.827719836074,0.827475423520,
	0.827231081651,0.826986810470,0.826742609982,0.826498480190,0.826254421095,
	0.826010432702,0.825766515011,0.825522668025,0.825278891746,0.825035186173,
	0.824791551308,0.824547987152,0.824304493704,0.824061070965,0.823817718933,
	0.823574437609,0.823331226991,0.823088087077,0.822845017867,0.822602019358,
	0.822359091547,0.822116234433,0.821873448013,0.821630732284,0.821388087241,
	0.821145512883,0.820903009205,0.820660576202,0.820418213871,0.820175922207,
	0.819933701205,0.819691550861,0.819449471168,0.819207462121,0.818965523715,
	0.818723655944,0.818481858801,0.818240132280,0.817998476374,0.817756891077,
	0.817515376381,0.817273932279,0.817032558764,0.816791255828,0.816550023462,
	0.816308861660,0.816067770413,0.815826749711,0.815585799548,0.815344919913,
	0.815104110797,0.814863372193,0.814622704089,0.814382106477,0.814141579347,
	0.813901122689,0.813660736493,0.813420420749,0.813180175445,0.812940000573,
	0.812699896121,0.812459862078,0.812219898433,0.811980005175,0.811740182293,
	0.811500429775,0.811260747610,0.811021135786,0.810781594291,0.810542123113,
	0.810302722240,0.810063391659,0.809824131358,0.809584941326,0.809345821548,
	0.809106772012,0.808867792705,0.808628883615,0.808390044728,0.808151276030,
	0.807912577509,0.807673949150,0.807435390941,0.807196902867,0.806958484914,
	0.806720137069,0.806481859318,0.806243651646,0.806005514039,0.805767446483,
	0.805529448963,0.805291521465,0.805053663974,0.804815876475,0.804578158953,
	0.804340511394,0.804102933782,0.803865426103,0.803627988341,0.803390620480,
	0.803153322506,0.802916094402,0.802678936154,0.802441847746,0.802204829161,
	0.801967880385,0.801731001401,0.801494192194,0.801257452746,0.801020783043,
	0.800784183069,0.800547652805,0.800311192238,0.800074801349,0.799838480124,
	0.799602228544,0.799366046594,0.799129934257,0.798893891517,0.798657918355,
	0.798422014757,0.798186180704,0.797950416180,0.797714721168,0.797479095650,
	0.797243539610,0.797008053030,0.796772635894,0.796537288184,0.796302009882,
	0.796066800971,0.795831661434,0.795596591253,0.795361590411,0.795126658890,
	0.794891796672,0.794657003741,0.794422280077,0.794187625663,0.793953040482,
	0.793718524516,0.793484077746,0.793249700155,0.793015391725,0.792781152437,
	0.792546982274,0.792312881217,0.792078849249,0.791844886351,0.791610992505,
	0.791377167693,0.791143411896,0.790909725096,0.790676107275,0.790442558414,
	0.790209078495,0.789975667500,0.789742325410,0.789509052205,0.789275847869,
	0.789042712382,0.788809645726,0.788576647882,0.788343718831,0.788110858554,
	0.787878067034,0.787645344250,0.787412690186,0.787180104820,0.786947588135,
	0.786715140113,0.786482760733,0.786250449977,0.786018207827,0.785786034262,
	0.785553929265,0.785321892816,0.785089924897,0.784858025487,0.784626194569,
	0.784394432123,0.784162738130,0.783931112570,0.783699555425,0.783468066676,
	0.783236646304,0.783005294288,0.782774010610,0.782542795252,0.782311648192,
	0.782080569413,0.781849558896,0.781618616619,0.781387742566,0.781156936715,
	0.780926199048,0.780695529546,0.780464928188,0.780234394957,0.780003929831,
	0.779773532793,0.779543203822,0.779312942900,0.779082750006,0.778852625121,
	0.778622568226,0.778392579301,0.778162658328,0.777932805285,0.777703020155,
	0.777473302917,0.777243653552,0.777014072040,0.776784558362,0.776555112498,
	0.776325734429,0.776096424135,0.775867181597,0.775638006795,0.775408899710,
	0.775179860321,0.774950888609,0.774721984556,0.774493148140,0.774264379343,
	0.774035678145,0.773807044526,0.773578478467,0.773349979947,0.773121548948,
	0.772893185450,0.772664889433,0.772436660877,0.772208499763,0.771980406072,
	0.771752379782,0.771524420876,0.771296529332,0.771068705132,0.770840948256,
	0.770613258684,0.770385636397,0.770158081374,0.769930593596,0.769703173043,
	0.769475819696,0.769248533535,0.769021314541,0.768794162693,0.768567077972,
	0.768340060358,0.768113109831,0.767886226372,0.767659409962,0.767432660580,
	0.767205978206,0.766979362821,0.766752814406,0.766526332940,0.766299918404,
	0.766073570779,0.765847290043,0.765621076179,0.765394929165,0.765168848983,
	0.764942835612,0.764716889034,0.764491009227,0.764265196173,0.764039449852,
	0.763813770244,0.763588157329,0.763362611088,0.763137131502,0.762911718549,
	0.762686372211,0.762461092468,0.762235879301,0.762010732688,0.761785652612,
	0.761560639052,0.761335691989,0.761110811402,0.760885997272,0.760661249581,
	0.760436568306,0.760211953430,0.759987404933,0.759762922794,0.759538506995,
	0.759314157515,0.759089874334,0.758865657434,0.758641506795,0.758417422396,
	0.758193404219,0.757969452244,0.757745566450,0.757521746819,0.757297993330,
	0.757074305965,0.756850684703,0.756627129524,0.756403640411,0.756180217341,
	0.755956860297,0.755733569258,0.755510344205,0.755287185119,0.755064091979,
	0.754841064766,0.754618103460,0.754395208042,0.754172378493,0.753949614792,
	0.753726916921,0.753504284859,0.753281718587,0.753059218086,0.752836783336,
	0.752614414317,0.752392111010,0.752169873395,0.751947701453,0.751725595165,
	0.751503554510,0.751281579470,0.751059670024,0.750837826153,0.750616047839,
	0.750394335060,0.750172687798,0.749951106034,0.749729589747,0.749508138919,
	0.749286753529,0.749065433559,0.748844178988,0.748622989799,0.748401865970,
	0.748180807483,0.747959814317,0.747738886455,0.747518023876,0.747297226560,
	0.747076494489,0.746855827643,0.746635226003,0.746414689549,0.746194218262,
	0.745973812122,0.745753471110,0.745533195206,0.745312984392,0.745092838648,
	0.744872757955,0.744652742292,0.744432791642,0.744212905984,0.743993085299,
	0.743773329568,0.743553638771,0.743334012889,0.743114451904,0.742894955795,
	0.742675524543,0.742456158129,0.742236856533
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


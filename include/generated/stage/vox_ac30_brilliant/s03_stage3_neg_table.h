
// s03_stage3_neg_table generated by DK/circ_table_gen.py -- do not modify manually

 // variables used
 // --sig_max  -10.000000
 // --table_div  25.354535
 // --table_op  1.000000

struct tables03_stage3_neg { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct tables03_stage3_neg_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator tables03_stage3_neg&() const { return *(tables03_stage3_neg*)this; }
};

static tables03_stage3_neg_imp<2048> s03_stage3_neg_table __rt_data = {
	0,-0.810067,204.7,2048, {
	0.000000000000,-0.003539011451,-0.007075467278,-0.010609355111,-0.014140662604,
	-0.017669377437,-0.021195487317,-0.024718979979,-0.028239843186,-0.031758064725,
	-0.035273632410,-0.038786534081,-0.042296757603,-0.045804290867,-0.049309121787,
	-0.052811238303,-0.056310628377,-0.059807279997,-0.063301181172,-0.066792319936,
	-0.070280684345,-0.073766262476,-0.077249042430,-0.080729012329,-0.084206160315,
	-0.087680474553,-0.091151943228,-0.094620554545,-0.098086296729,-0.101549158025,
	-0.105009126698,-0.108466191031,-0.111920339327,-0.115371559906,-0.118819841108,
	-0.122265171289,-0.125707538824,-0.129146932104,-0.132583339538,-0.136016749551,
	-0.139447150585,-0.142874531097,-0.146298879561,-0.149720184465,-0.153138434313,
	-0.156553617625,-0.159965722932,-0.163374738783,-0.166780653739,-0.170183456375,
	-0.173583135280,-0.176979679055,-0.180373076314,-0.183763315684,-0.187150385804,
	-0.190534275326,-0.193914972911,-0.197292467234,-0.200666746979,-0.204037800843,
	-0.207405617531,-0.210770185761,-0.214131494258,-0.217489531759,-0.220844287010,
	-0.224195748765,-0.227543905787,-0.230888746850,-0.234230260733,-0.237568436225,
	-0.240903262122,-0.244234727227,-0.247562820353,-0.250887530316,-0.254208845942,
	-0.257526756061,-0.260841249512,-0.264152315136,-0.267459941783,-0.270764118306,
	-0.274064833566,-0.277362076427,-0.280655835756,-0.283946100428,-0.287232859319,
	-0.290516101310,-0.293795815287,-0.297071990136,-0.300344614750,-0.303613678020,
	-0.306879168845,-0.310141076123,-0.313399388754,-0.316654095640,-0.319905185687,
	-0.323152647799,-0.326396470883,-0.329636643846,-0.332873155596,-0.336105995041,
	-0.339335151090,-0.342560612650,-0.345782368629,-0.349000407935,-0.352214719473,
	-0.355425292150,-0.358632114867,-0.361835176528,-0.365034466033,-0.368229972280,
	-0.371421684166,-0.374609590582,-0.377793680421,-0.380973942570,-0.384150365913,
	-0.387322939331,-0.390491651701,-0.393656491898,-0.396817448788,-0.399974511239,
	-0.403127668109,-0.406276908255,-0.409422220526,-0.412563593767,-0.415701016819,
	-0.418834478514,-0.421963967680,-0.425089473139,-0.428210983707,-0.431328488192,
	-0.434441975395,-0.437551434112,-0.440656853130,-0.443758221229,-0.446855527181,
	-0.449948759751,-0.453037907695,-0.456122959760,-0.459203904687,-0.462280731206,
	-0.465353428038,-0.468421983897,-0.471486387485,-0.474546627495,-0.477602692613,
	-0.480654571510,-0.483702252851,-0.486745725290,-0.489784977468,-0.492819998017,
	-0.495850775559,-0.498877298702,-0.501899556046,-0.504917536175,-0.507931227667,
	-0.510940619082,-0.513945698973,-0.516946455876,-0.519942878319,-0.522934954813,
	-0.525922673860,-0.528906023946,-0.531884993544,-0.534859571116,-0.537829745107,
	-0.540795503951,-0.543756836066,-0.546713729856,-0.549666173712,-0.552614156009,
	-0.555557665108,-0.558496689355,-0.561431217081,-0.564361236602,-0.567286736217,
	-0.570207704212,-0.573124128855,-0.576035998399,-0.578943301081,-0.581846025123,
	-0.584744158727,-0.587637690083,-0.590526607361,-0.593410898715,-0.596290552282,
	-0.599165556183,-0.602035898521,-0.604901567380,-0.607762550828,-0.610618836916,
	-0.613470413675,-0.616317269119,-0.619159391244,-0.621996768029,-0.624829387431,
	-0.627657237392,-0.630480305834,-0.633298580659,-0.636112049752,-0.638920700978,
	-0.641724522183,-0.644523501194,-0.647317625817,-0.650106883841,-0.652891263034,
	-0.655670751143,-0.658445335898,-0.661215005006,-0.663979746157,-0.666739547018,
	-0.669494395238,-0.672244278444,-0.674989184244,-0.677729100224,-0.680464013951,
	-0.683193912970,-0.685918784805,-0.688638616961,-0.691353396920,-0.694063112145,
	-0.696767750076,-0.699467298133,-0.702161743716,-0.704851074200,-0.707535276943,
	-0.710214339280,-0.712888248523,-0.715556991965,-0.718220556876,-0.720878930506,
	-0.723532100082,-0.726180052810,-0.728822775875,-0.731460256440,-0.734092481645,
	-0.736719438610,-0.739341114435,-0.741957496194,-0.744568570942,-0.747174325714,
	-0.749774747520,-0.752369823350,-0.754959540173,-0.757543884935,-0.760122844563,
	-0.762696405958,-0.765264556005,-0.767827281564,-0.770384569474,-0.772936406553,
	-0.775482779599,-0.778023675387,-0.780559080672,-0.783088982188,-0.785613366646,
	-0.788132220739,-0.790645531138,-0.793153284493,-0.795655467434,-0.798152066568,
	-0.800643068486,-0.803128459756,-0.805608226926,-0.808082356524,-0.810550835058,
	-0.813013649018,-0.815470784872,-0.817922229071,-0.820367968043,-0.822807988202,
	-0.825242275940,-0.827670817629,-0.830093599626,-0.832510608268,-0.834921829872,
	-0.837327250740,-0.839726857156,-0.842120635385,-0.844508571675,-0.846890652258,
	-0.849266863349,-0.851637191147,-0.854001621833,-0.856360141574,-0.858712736521,
	-0.861059392809,-0.863400096559,-0.865734833876,-0.868063590851,-0.870386353563,
	-0.872703108074,-0.875013840434,-0.877318536681,-0.879617182840,-0.881909764923,
	-0.884196268929,-0.886476680849,-0.888750986660,-0.891019172330,-0.893281223815,
	-0.895537127062,-0.897786868011,-0.900030432590,-0.902267806719,-0.904498976311,
	-0.906723927273,-0.908942645501,-0.911155116890,-0.913361327323,-0.915561262683,
	-0.917754908846,-0.919942251683,-0.922123277063,-0.924297970850,-0.926466318908,
	-0.928628307097,-0.930783921277,-0.932933147306,-0.935075971045,-0.937212378352,
	-0.939342355088,-0.941465887118,-0.943582960307,-0.945693560524,-0.947797673643,
	-0.949895285543,-0.951986382109,-0.954070949231,-0.956148972807,-0.958220438743,
	-0.960285332956,-0.962343641369,-0.964395349918,-0.966440444549,-0.968478911223,
	-0.970510735911,-0.972535904599,-0.974554403289,-0.976566217998,-0.978571334761,
	-0.980569739628,-0.982561418672,-0.984546357982,-0.986524543669,-0.988495961868,
	-0.990460598735,-0.992418440449,-0.994369473215,-0.996313683266,-0.998251056858,
	-1.000181580280,-1.002105239848,-1.004022021908,-1.005931912840,-1.007834899056,
	-1.009730967001,-1.011620103157,-1.013502294044,-1.015377526216,-1.017245786271,
	-1.019107060843,-1.020961336611,-1.022808600298,-1.024648838667,-1.026482038532,
	-1.028308186752,-1.030127270235,-1.031939275938,-1.033744190872,-1.035542002099,
	-1.037332696737,-1.039116261960,-1.040892684997,-1.042661953141,-1.044424053740,
	-1.046178974209,-1.047926702023,-1.049667224726,-1.051400529926,-1.053126605301,
	-1.054845438600,-1.056557017643,-1.058261330323,-1.059958364611,-1.061648108553,
	-1.063330550273,-1.065005677979,-1.066673479959,-1.068333944586,-1.069987060318,
	-1.071632815703,-1.073271199376,-1.074902200067,-1.076525806597,-1.078142007883,
	-1.079750792940,-1.081352150880,-1.082946070921,-1.084532542378,-1.086111554677,
	-1.087683097347,-1.089247160029,-1.090803732473,-1.092352804544,-1.093894366221,
	-1.095428407601,-1.096954918902,-1.098473890460,-1.099985312739,-1.101489176325,
	-1.102985471935,-1.104474190414,-1.105955322741,-1.107428860028,-1.108894793525,
	-1.110353114620,-1.111803814842,-1.113246885865,-1.114682319506,-1.116110107731,
	-1.117530242657,-1.118942716552,-1.120347521840,-1.121744651099,-1.123134097070,
	-1.124515852652,-1.125889910911,-1.127256265075,-1.128614908544,-1.129965834887,
	-1.131309037846,-1.132644511339,-1.133972249461,-1.135292246487,-1.136604496874,
	-1.137908995264,-1.139205736486,-1.140494715558,-1.141775927690,-1.143049368284,
	-1.144315032942,-1.145572917460,-1.146823017839,-1.148065330280,-1.149299851190,
	-1.150526577187,-1.151745505094,-1.152956631949,-1.154159955006,-1.155355471732,
	-1.156543179817,-1.157723077171,-1.158895161925,-1.160059432440,-1.161215887303,
	-1.162364525330,-1.163505345572,-1.164638347312,-1.165763530072,-1.166880893610,
	-1.167990437928,-1.169092163269,-1.170186070121,-1.171272159220,-1.172350431551,
	-1.173420888349,-1.174483531104,-1.175538361558,-1.176585381713,-1.177624593828,
	-1.178656000424,-1.179679604283,-1.180695408453,-1.181703416245,-1.182703631242,
	-1.183696057292,-1.184680698519,-1.185657559316,-1.186626644352,-1.187587958571,
	-1.188541507196,-1.189487295727,-1.190425329946,-1.191355615917,-1.192278159985,
	-1.193192968781,-1.194100049222,-1.194999408511,-1.195891054140,-1.196774993890,
	-1.197651235830,-1.198519788325,-1.199380660028,-1.200233859888,-1.201079397147,
	-1.201917281341,-1.202747522304,-1.203570130164,-1.204385115349,-1.205192488582,
	-1.205992260885,-1.206784443580,-1.207569048287,-1.208346086926,-1.209115571716,
	-1.209877515178,-1.210631930131,-1.211378829697,-1.212118227296,-1.212850136651,
	-1.213574571784,-1.214291547017,-1.215001076973,-1.215703176576,-1.216397861047,
	-1.217085145910,-1.217765046983,-1.218437580386,-1.219102762537,-1.219760610148,
	-1.220411140229,-1.221054370087,-1.221690317323,-1.222318999829,-1.222940435794,
	-1.223554643697,-1.224161642307,-1.224761450684,-1.225354088175,-1.225939574414,
	-1.226517929322,-1.227089173103,-1.227653326243,-1.228210409509,-1.228760443949,
	-1.229303450887,-1.229839451922,-1.230368468930,-1.230890524056,-1.231405639716,
	-1.231913838593,-1.232415143638,-1.232909578064,-1.233397165345,-1.233877929214,
	-1.234351893663,-1.234819082934,-1.235279521525,-1.235733234179,-1.236180245889,
	-1.236620581890,-1.237054267658,-1.237481328908,-1.237901791589,-1.238315681883,
	-1.238723026204,-1.239123851188,-1.239518183697,-1.239906050813,-1.240287479835,
	-1.240662498274,-1.241031133856,-1.241393414509,-1.241749368367,-1.242099023765,
	-1.242442409235,-1.242779553501,-1.243110485478,-1.243435234266,-1.243753829150,
	-1.244066299590,-1.244372675226,-1.244672985866,-1.244967261488,-1.245255532231,
	-1.245537828398,-1.245814180444,-1.246084618981,-1.246349174764,-1.246607878698,
	-1.246860761824,-1.247107855323,-1.247349190505,-1.247584798812,-1.247814711807,
	-1.248038961176,-1.248257578720,-1.248470596353,-1.248678046096,-1.248879960074,
	-1.249076370513,-1.249267309734,-1.249452810149,-1.249632904258,-1.249807624644,
	-1.249977003970,-1.250141074973,-1.250299870461,-1.250453423309,-1.250601766454,
	-1.250744932893,-1.250882955676,-1.251015867902,-1.251143702718,-1.251266493314,
	-1.251384272915,-1.251497074783,-1.251604932206,-1.251707878502,-1.251805947009,
	-1.251899171082,-1.251987584090,-1.252071219414,-1.252150110438,-1.252224290552,
	-1.252293793139,-1.252358651582,-1.252418899250,-1.252474569502,-1.252525695678,
	-1.252572311098,-1.252614449058,-1.252652142825,-1.252685425636,-1.252714330692,
	-1.252738891153,-1.252759140141,-1.252775110729,-1.252786835942,-1.252794348751,
	-1.252797682074,-1.252796868766,-1.252791941623,-1.252782933372,-1.252769876674,
	-1.252752804116,-1.252731748211,-1.252706741392,-1.252677816012,-1.252645004339,
	-1.252608338556,-1.252567850754,-1.252523572931,-1.252475536990,-1.252423774737,
	-1.252368317874,-1.252309198003,-1.252246446616,-1.252180095099,-1.252110174726,
	-1.252036716658,-1.251959751939,-1.251879311495,-1.251795426131,-1.251708126530,
	-1.251617443250,-1.251523406722,-1.251426047245,-1.251325394991,-1.251221479997,
	-1.251114332164,-1.251003981256,-1.250890456901,-1.250773788582,-1.250654005644,
	-1.250531137284,-1.250405212558,-1.250276260369,-1.250144309478,-1.250009388489,
	-1.249871525860,-1.249730749893,-1.249587088736,-1.249440570382,-1.249291222667,
	-1.249139073270,-1.248984149708,-1.248826479341,-1.248666089365,-1.248503006816,
	-1.248337258565,-1.248168871320,-1.247997871623,-1.247824285851,-1.247648140214,
	-1.247469460754,-1.247288273345,-1.247104603695,-1.246918477338,-1.246729919642,
	-1.246538955803,-1.246345610846,-1.246149909624,-1.245951876821,-1.245751536945,
	-1.245548914333,-1.245344033152,-1.245136917391,-1.244927590870,-1.244716077234,
	-1.244502399952,-1.244286582324,-1.244068647472,-1.243848618346,-1.243626517722,
	-1.243402368203,-1.243176192216,-1.242948012016,-1.242717849683,-1.242485727125,
	-1.242251666075,-1.242015688095,-1.241777814572,-1.241538066721,-1.241296465585,
	-1.241053032035,-1.240807786768,-1.240560750313,-1.240311943026,-1.240061385092,
	-1.239809096527,-1.239555097176,-1.239299406716,-1.239042044654,-1.238783030330,
	-1.238522382913,-1.238260121410,-1.237996264657,-1.237730831326,-1.237463839922,
	-1.237195308787,-1.236925256097,-1.236653699867,-1.236380657947,-1.236106148025,
	-1.235830187628,-1.235552794123,-1.235273984716,-1.234993776454,-1.234712186226,
	-1.234429230762,-1.234144926638,-1.233859290271,-1.233572337924,-1.233284085705,
	-1.232994549569,-1.232703745319,-1.232411688603,-1.232118394923,-1.231823879626,
	-1.231528157912,-1.231231244832,-1.230933155292,-1.230633904047,-1.230333505710,
	-1.230031974748,-1.229729325484,-1.229425572098,-1.229120728629,-1.228814808975,
	-1.228507826892,-1.228199796000,-1.227890729778,-1.227580641570,-1.227269544582,
	-1.226957451888,-1.226644376423,-1.226330330993,-1.226015328270,-1.225699380794,
	-1.225382500976,-1.225064701097,-1.224745993309,-1.224426389639,-1.224105901985,
	-1.223784542121,-1.223462321696,-1.223139252236,-1.222815345145,-1.222490611704,
	-1.222165063076,-1.221838710302,-1.221511564306,-1.221183635895,-1.220854935757,
	-1.220525474468,-1.220195262487,-1.219864310159,-1.219532627719,-1.219200225289,
	-1.218867112879,-1.218533300392,-1.218198797620,-1.217863614248,-1.217527759854,
	-1.217191243912,-1.216854075789,-1.216516264749,-1.216177819952,-1.215838750457,
	-1.215499065222,-1.215158773105,-1.214817882863,-1.214476403156,-1.214134342548,
	-1.213791709504,-1.213448512395,-1.213104759497,-1.212760458992,-1.212415618970,
	-1.212070247427,-1.211724352271,-1.211377941318,-1.211031022294,-1.210683602838,
	-1.210335690502,-1.209987292749,-1.209638416958,-1.209289070423,-1.208939260353,
	-1.208588993875,-1.208238278032,-1.207887119786,-1.207535526020,-1.207183503534,
	-1.206831059051,-1.206478199216,-1.206124930593,-1.205771259675,-1.205417192873,
	-1.205062736528,-1.204707896904,-1.204352680191,-1.203997092508,-1.203641139901,
	-1.203284828344,-1.202928163742,-1.202571151930,-1.202213798672,-1.201856109666,
	-1.201498090541,-1.201139746861,-1.200781084121,-1.200422107754,-1.200062823124,
	-1.199703235536,-1.199343350227,-1.198983172375,-1.198622707093,-1.198261959436,
	-1.197900934395,-1.197539636904,-1.197178071835,-1.196816244004,-1.196454158168,
	-1.196091819026,-1.195729231220,-1.195366399337,-1.195003327909,-1.194640021412,
	-1.194276484268,-1.193912720846,-1.193548735461,-1.193184532376,-1.192820115803,
	-1.192455489902,-1.192090658781,-1.191725626502,-1.191360397072,-1.190994974454,
	-1.190629362559,-1.190263565252,-1.189897586351,-1.189531429626,-1.189165098800,
	-1.188798597554,-1.188431929520,-1.188065098287,-1.187698107399,-1.187330960359,
	-1.186963660623,-1.186596211607,-1.186228616683,-1.185860879185,-1.185493002401,
	-1.185124989581,-1.184756843936,-1.184388568635,-1.184020166807,-1.183651641546,
	-1.183282995903,-1.182914232895,-1.182545355500,-1.182176366658,-1.181807269273,
	-1.181438066215,-1.181068760315,-1.180699354370,-1.180329851143,-1.179960253362,
	-1.179590563720,-1.179220784878,-1.178850919462,-1.178480970065,-1.178110939251,
	-1.177740829547,-1.177370643453,-1.177000383433,-1.176630051924,-1.176259651330,
	-1.175889184026,-1.175518652357,-1.175148058638,-1.174777405155,-1.174406694165,
	-1.174035927898,-1.173665108555,-1.173294238307,-1.172923319302,-1.172552353657,
	-1.172181343465,-1.171810290790,-1.171439197671,-1.171068066123,-1.170696898133,
	-1.170325695664,-1.169954460654,-1.169583195016,-1.169211900638,-1.168840579387,
	-1.168469233102,-1.168097863603,-1.167726472684,-1.167355062116,-1.166983633650,
	-1.166612189013,-1.166240729909,-1.165869258022,-1.165497775013,-1.165126282525,
	-1.164754782175,-1.164383275564,-1.164011764270,-1.163640249851,-1.163268733846,
	-1.162897217773,-1.162525703133,-1.162154191405,-1.161782684050,-1.161411182510,
	-1.161039688210,-1.160668202555,-1.160296726933,-1.159925262714,-1.159553811249,
	-1.159182373873,-1.158810951904,-1.158439546642,-1.158068159371,-1.157696791358,
	-1.157325443855,-1.156954118095,-1.156582815299,-1.156211536668,-1.155840283390,
	-1.155469056638,-1.155097857568,-1.154726687322,-1.154355547028,-1.153984437798,
	-1.153613360731,-1.153242316910,-1.152871307404,-1.152500333271,-1.152129395552,
	-1.151758495276,-1.151387633458,-1.151016811100,-1.150646029191,-1.150275288708,
	-1.149904590613,-1.149533935858,-1.149163325381,-1.148792760108,-1.148422240954,
	-1.148051768819,-1.147681344595,-1.147310969161,-1.146940643382,-1.146570368116,
	-1.146200144207,-1.145829972487,-1.145459853780,-1.145089788898,-1.144719778640,
	-1.144349823799,-1.143979925153,-1.143610083473,-1.143240299519,-1.142870574039,
	-1.142500907775,-1.142131301454,-1.141761755799,-1.141392271520,-1.141022849318,
	-1.140653489886,-1.140284193905,-1.139914962051,-1.139545794988,-1.139176693372,
	-1.138807657856,-1.138438689068,-1.138069787643,-1.137700954204,-1.137332189364,
	-1.136963493729,-1.136594867895,-1.136226312452,-1.135857827983,-1.135489415059,
	-1.135121074248,-1.134752806107,-1.134384611188,-1.134016490034,-1.133648443182,
	-1.133280471159,-1.132912574490,-1.132544753687,-1.132177009259,-1.131809341708,
	-1.131441751527,-1.131074239204,-1.130706805220,-1.130339450050,-1.129972174161,
	-1.129604978016,-1.129237862069,-1.128870826771,-1.128503872563,-1.128136999885,
	-1.127770209165,-1.127403500831,-1.127036875300,-1.126670332988,-1.126303874301,
	-1.125937499643,-1.125571209411,-1.125205003995,-1.124838883782,-1.124472849153,
	-1.124106900483,-1.123741038142,-1.123375262497,-1.123009573906,-1.122643972726,
	-1.122278459306,-1.121913033992,-1.121547697124,-1.121182449039,-1.120817290067,
	-1.120452220535,-1.120087240765,-1.119722351075,-1.119357551777,-1.118992843180,
	-1.118628225589,-1.118263699303,-1.117899264619,-1.117534921827,-1.117170671216,
	-1.116806513069,-1.116442447665,-1.116078475279,-1.115714596184,-1.115350810647,
	-1.114987118931,-1.114623521297,-1.114260018001,-1.113896609296,-1.113533295430,
	-1.113170076650,-1.112806953197,-1.112443925310,-1.112080993223,-1.111718157168,
	-1.111355417374,-1.110992774065,-1.110630227462,-1.110267777785,-1.109905425248,
	-1.109543170063,-1.109181012440,-1.108818952584,-1.108456990698,-1.108095126981,
	-1.107733361631,-1.107371694842,-1.107010126803,-1.106648657705,-1.106287287732,
	-1.105926017066,-1.105564845887,-1.105203774373,-1.104842802698,-1.104481931034,
	-1.104121159550,-1.103760488413,-1.103399917787,-1.103039447833,-1.102679078710,
	-1.102318810576,-1.101958643584,-1.101598577886,-1.101238613633,-1.100878750970,
	-1.100518990043,-1.100159330995,-1.099799773966,-1.099440319093,-1.099080966514,
	-1.098721716362,-1.098362568769,-1.098003523864,-1.097644581775,-1.097285742628,
	-1.096927006545,-1.096568373649,-1.096209844058,-1.095851417891,-1.095493095264,
	-1.095134876289,-1.094776761079,-1.094418749744,-1.094060842392,-1.093703039130,
	-1.093345340062,-1.092987745291,-1.092630254918,-1.092272869043,-1.091915587763,
	-1.091558411175,-1.091201339372,-1.090844372449,-1.090487510495,-1.090130753601,
	-1.089774101854,-1.089417555342,-1.089061114148,-1.088704778358,-1.088348548051,
	-1.087992423310,-1.087636404213,-1.087280490837,-1.086924683259,-1.086568981554,
	-1.086213385796,-1.085857896055,-1.085502512404,-1.085147234911,-1.084792063644,
	-1.084436998671,-1.084082040057,-1.083727187865,-1.083372442160,-1.083017803003,
	-1.082663270454,-1.082308844573,-1.081954525418,-1.081600313046,-1.081246207513,
	-1.080892208873,-1.080538317181,-1.080184532489,-1.079830854848,-1.079477284308,
	-1.079123820919,-1.078770464729,-1.078417215785,-1.078064074134,-1.077711039819,
	-1.077358112886,-1.077005293378,-1.076652581336,-1.076299976803,-1.075947479817,
	-1.075595090419,-1.075242808646,-1.074890634536,-1.074538568127,-1.074186609452,
	-1.073834758548,-1.073483015447,-1.073131380184,-1.072779852789,-1.072428433295,
	-1.072077121733,-1.071725918130,-1.071374822517,-1.071023834922,-1.070672955372,
	-1.070322183893,-1.069971520512,-1.069620965252,-1.069270518139,-1.068920179196,
	-1.068569948445,-1.068219825909,-1.067869811610,-1.067519905567,-1.067170107800,
	-1.066820418330,-1.066470837174,-1.066121364351,-1.065771999877,-1.065422743770,
	-1.065073596045,-1.064724556718,-1.064375625803,-1.064026803314,-1.063678089266,
	-1.063329483670,-1.062980986539,-1.062632597885,-1.062284317720,-1.061936146052,
	-1.061588082893,-1.061240128252,-1.060892282138,-1.060544544559,-1.060196915523,
	-1.059849395037,-1.059501983108,-1.059154679743,-1.058807484946,-1.058460398723,
	-1.058113421079,-1.057766552018,-1.057419791544,-1.057073139660,-1.056726596369,
	-1.056380161673,-1.056033835574,-1.055687618073,-1.055341509172,-1.054995508871,
	-1.054649617169,-1.054303834068,-1.053958159565,-1.053612593660,-1.053267136351,
	-1.052921787636,-1.052576547513,-1.052231415979,-1.051886393030,-1.051541478663,
	-1.051196672874,-1.050851975658,-1.050507387012,-1.050162906929,-1.049818535404,
	-1.049474272432,-1.049130118006,-1.048786072119,-1.048442134765,-1.048098305937,
	-1.047754585627,-1.047410973826,-1.047067470527,-1.046724075722,-1.046380789400,
	-1.046037611554,-1.045694542173,-1.045351581248,-1.045008728768,-1.044665984723,
	-1.044323349103,-1.043980821896,-1.043638403091,-1.043296092676,-1.042953890640,
	-1.042611796970,-1.042269811654,-1.041927934679,-1.041586166033,-1.041244505701,
	-1.040902953671,-1.040561509928,-1.040220174459,-1.039878947249,-1.039537828284,
	-1.039196817549,-1.038855915030,-1.038515120709,-1.038174434574,-1.037833856607,
	-1.037493386792,-1.037153025114,-1.036812771556,-1.036472626101,-1.036132588733,
	-1.035792659435,-1.035452838189,-1.035113124978,-1.034773519783,-1.034434022589,
	-1.034094633375,-1.033755352124,-1.033416178817,-1.033077113437,-1.032738155963,
	-1.032399306377,-1.032060564659,-1.031721930791,-1.031383404752,-1.031044986523,
	-1.030706676084,-1.030368473414,-1.030030378494,-1.029692391302,-1.029354511819,
	-1.029016740023,-1.028679075894,-1.028341519410,-1.028004070550,-1.027666729292,
	-1.027329495615,-1.026992369498,-1.026655350917,-1.026318439852,-1.025981636280,
	-1.025644940179,-1.025308351525,-1.024971870297,-1.024635496472,-1.024299230027,
	-1.023963070938,-1.023627019183,-1.023291074738,-1.022955237580,-1.022619507685,
	-1.022283885030,-1.021948369590,-1.021612961342,-1.021277660262,-1.020942466325,
	-1.020607379508,-1.020272399785,-1.019937527132,-1.019602761525,-1.019268102938,
	-1.018933551348,-1.018599106728,-1.018264769054,-1.017930538301,-1.017596414443,
	-1.017262397454,-1.016928487310,-1.016594683985,-1.016260987453,-1.015927397688,
	-1.015593914664,-1.015260538355,-1.014927268735,-1.014594105779,-1.014261049459,
	-1.013928099749,-1.013595256623,-1.013262520055,-1.012929890016,-1.012597366482,
	-1.012264949425,-1.011932638818,-1.011600434634,-1.011268336847,-1.010936345428,
	-1.010604460351,-1.010272681588,-1.009941009113,-1.009609442897,-1.009277982913,
	-1.008946629134,-1.008615381532,-1.008284240079,-1.007953204747,-1.007622275508,
	-1.007291452335,-1.006960735200,-1.006630124074,-1.006299618929,-1.005969219737,
	-1.005638926470,-1.005308739099,-1.004978657596,-1.004648681932,-1.004318812080,
	-1.003989048010,-1.003659389694,-1.003329837103,-1.003000390208,-1.002671048981,
	-1.002341813392,-1.002012683413,-1.001683659015,-1.001354740169,-1.001025926845,
	-1.000697219015,-1.000368616649,-1.000040119718,-0.999711728193,-0.999383442044,
	-0.999055261243,-0.998727185759,-0.998399215563,-0.998071350626,-0.997743590919,
	-0.997415936410,-0.997088387072,-0.996760942874,-0.996433603786,-0.996106369779,
	-0.995779240823,-0.995452216888,-0.995125297944,-0.994798483961,-0.994471774909,
	-0.994145170759,-0.993818671480,-0.993492277042,-0.993165987414,-0.992839802568,
	-0.992513722472,-0.992187747096,-0.991861876411,-0.991536110385,-0.991210448989,
	-0.990884892192,-0.990559439964,-0.990234092274,-0.989908849092,-0.989583710387,
	-0.989258676129,-0.988933746288,-0.988608920832,-0.988284199731,-0.987959582955,
	-0.987635070473,-0.987310662254,-0.986986358267,-0.986662158482,-0.986338062869,
	-0.986014071395,-0.985690184031,-0.985366400745,-0.985042721507,-0.984719146286,
	-0.984395675050,-0.984072307770,-0.983749044414,-0.983425884950,-0.983102829349,
	-0.982779877579,-0.982457029609,-0.982134285408,-0.981811644944,-0.981489108188,
	-0.981166675107,-0.980844345671,-0.980522119848,-0.980199997607,-0.979877978917,
	-0.979556063747,-0.979234252066,-0.978912543842,-0.978590939044,-0.978269437641,
	-0.977948039602,-0.977626744895,-0.977305553488,-0.976984465351,-0.976663480453,
	-0.976342598761,-0.976021820245,-0.975701144873,-0.975380572614,-0.975060103436,
	-0.974739737307,-0.974419474198,-0.974099314075,-0.973779256907,-0.973459302664,
	-0.973139451313,-0.972819702823,-0.972500057163,-0.972180514300,-0.971861074204,
	-0.971541736843,-0.971222502186,-0.970903370200,-0.970584340854,-0.970265414117,
	-0.969946589957,-0.969627868342,-0.969309249241,-0.968990732623,-0.968672318455,
	-0.968354006706,-0.968035797344,-0.967717690338,-0.967399685656,-0.967081783266,
	-0.966763983137,-0.966446285237,-0.966128689534,-0.965811195996,-0.965493804593,
	-0.965176515292,-0.964859328062,-0.964542242870,-0.964225259685,-0.963908378476,
	-0.963591599210,-0.963274921856,-0.962958346383,-0.962641872758,-0.962325500949,
	-0.962009230926,-0.961693062655,-0.961376996106,-0.961061031247,-0.960745168046,
	-0.960429406470,-0.960113746489,-0.959798188071,-0.959482731184,-0.959167375795,
	-0.958852121874,-0.958536969389,-0.958221918307,-0.957906968597,-0.957592120227,
	-0.957277373165,-0.956962727380,-0.956648182840,-0.956333739513,-0.956019397366,
	-0.955705156370,-0.955391016490,-0.955076977697,-0.954763039958,-0.954449203240,
	-0.954135467514,-0.953821832745,-0.953508298904,-0.953194865957,-0.952881533874,
	-0.952568302622,-0.952255172170,-0.951942142485,-0.951629213537,-0.951316385293,
	-0.951003657721,-0.950691030790,-0.950378504467,-0.950066078722,-0.949753753522,
	-0.949441528835,-0.949129404630,-0.948817380875,-0.948505457538,-0.948193634588,
	-0.947881911991,-0.947570289718,-0.947258767736,-0.946947346013,-0.946636024517,
	-0.946324803217,-0.946013682081,-0.945702661077,-0.945391740174,-0.945080919339,
	-0.944770198541,-0.944459577748,-0.944149056929,-0.943838636051,-0.943528315083,
	-0.943218093994,-0.942907972750,-0.942597951322,-0.942288029676,-0.941978207782,
	-0.941668485607,-0.941358863120,-0.941049340289,-0.940739917082,-0.940430593468,
	-0.940121369415,-0.939812244892,-0.939503219866,-0.939194294305,-0.938885468179,
	-0.938576741456,-0.938268114103,-0.937959586090,-0.937651157384,-0.937342827953,
	-0.937034597767,-0.936726466794,-0.936418435002,-0.936110502358,-0.935802668833,
	-0.935494934393,-0.935187299008,-0.934879762645,-0.934572325273,-0.934264986861,
	-0.933957747377,-0.933650606790,-0.933343565066,-0.933036622176,-0.932729778088,
	-0.932423032769,-0.932116386189,-0.931809838316,-0.931503389118,-0.931197038563,
	-0.930890786621,-0.930584633259,-0.930278578447,-0.929972622151,-0.929666764342,
	-0.929361004988,-0.929055344056,-0.928749781516,-0.928444317335,-0.928138951483,
	-0.927833683929,-0.927528514639,-0.927223443584,-0.926918470731,-0.926613596049,
	-0.926308819507,-0.926004141073,-0.925699560716,-0.925395078404,-0.925090694106,
	-0.924786407790,-0.924482219425,-0.924178128980,-0.923874136424,-0.923570241724,
	-0.923266444849,-0.922962745768,-0.922659144451,-0.922355640864,-0.922052234977,
	-0.921748926759,-0.921445716179,-0.921142603204,-0.920839587803,-0.920536669946,
	-0.920233849601,-0.919931126737,-0.919628501322,-0.919325973324,-0.919023542714,
	-0.918721209459,-0.918418973528,-0.918116834890,-0.917814793514,-0.917512849368,
	-0.917211002421,-0.916909252642,-0.916607600000,-0.916306044464,-0.916004586001,
	-0.915703224582,-0.915401960175,-0.915100792748,-0.914799722271,-0.914498748712,
	-0.914197872040,-0.913897092224,-0.913596409233,-0.913295823036,-0.912995333601,
	-0.912694940898,-0.912394644895,-0.912094445561,-0.911794342865,-0.911494336777,
	-0.911194427264,-0.910894614296,-0.910594897842,-0.910295277870,-0.909995754351,
	-0.909696327251,-0.909396996542,-0.909097762191,-0.908798624167,-0.908499582440,
	-0.908200636979,-0.907901787752,-0.907603034728,-0.907304377877,-0.907005817168,
	-0.906707352569,-0.906408984050,-0.906110711580,-0.905812535127,-0.905514454661,
	-0.905216470151,-0.904918581566,-0.904620788876,-0.904323092048,-0.904025491053,
	-0.903727985859,-0.903430576435,-0.903133262752,-0.902836044777,-0.902538922480,
	-0.902241895830,-0.901944964797,-0.901648129349,-0.901351389456,-0.901054745087,
	-0.900758196211,-0.900461742797,-0.900165384815,-0.899869122233,-0.899572955022,
	-0.899276883150,-0.898980906586,-0.898685025300,-0.898389239262,-0.898093548439,
	-0.897797952802,-0.897502452321,-0.897207046963,-0.896911736699,-0.896616521498,
	-0.896321401329,-0.896026376162,-0.895731445966,-0.895436610710,-0.895141870363,
	-0.894847224896,-0.894552674278,-0.894258218477,-0.893963857463,-0.893669591206,
	-0.893375419675,-0.893081342840,-0.892787360670,-0.892493473134,-0.892199680202,
	-0.891905981843,-0.891612378028,-0.891318868724,-0.891025453903,-0.890732133533,
	-0.890438907583,-0.890145776024,-0.889852738825,-0.889559795956,-0.889266947385,
	-0.888974193083,-0.888681533020,-0.888388967164,-0.888096495485,-0.887804117953,
	-0.887511834538,-0.887219645209,-0.886927549935,-0.886635548687,-0.886343641434,
	-0.886051828146,-0.885760108792,-0.885468483342,-0.885176951765,-0.884885514033,
	-0.884594170113,-0.884302919976,-0.884011763591,-0.883720700929,-0.883429731958,
	-0.883138856650,-0.882848074973,-0.882557386897,-0.882266792391,-0.881976291427,
	-0.881685883973,-0.881395570000,-0.881105349477,-0.880815222374,-0.880525188660,
	-0.880235248306,-0.879945401282,-0.879655647557,-0.879365987101,-0.879076419884,
	-0.878786945876,-0.878497565047,-0.878208277367,-0.877919082805,-0.877629981332,
	-0.877340972918,-0.877052057531,-0.876763235143,-0.876474505724,-0.876185869243,
	-0.875897325669,-0.875608874975,-0.875320517128,-0.875032252100,-0.874744079860,
	-0.874456000378,-0.874168013624,-0.873880119569,-0.873592318182,-0.873304609433,
	-0.873016993293,-0.872729469732,-0.872442038719,-0.872154700225,-0.871867454219,
	-0.871580300673,-0.871293239556,-0.871006270838,-0.870719394489,-0.870432610479,
	-0.870145918780,-0.869859319360,-0.869572812190,-0.869286397240,-0.869000074481,
	-0.868713843882,-0.868427705414,-0.868141659048,-0.867855704752,-0.867569842498,
	-0.867284072255,-0.866998393995,-0.866712807686,-0.866427313301,-0.866141910808,
	-0.865856600178,-0.865571381382,-0.865286254389,-0.865001219171,-0.864716275696,
	-0.864431423937,-0.864146663863,-0.863861995444,-0.863577418651,-0.863292933454,
	-0.863008539824,-0.862724237731,-0.862440027145,-0.862155908038,-0.861871880378,
	-0.861587944137,-0.861304099285,-0.861020345793,-0.860736683631,-0.860453112770,
	-0.860169633179,-0.859886244830,-0.859602947693,-0.859319741739,-0.859036626937,
	-0.858753603259,-0.858470670676,-0.858187829157,-0.857905078673,-0.857622419195,
	-0.857339850693,-0.857057373138,-0.856774986501,-0.856492690752,-0.856210485862,
	-0.855928371801,-0.855646348540,-0.855364416050,-0.855082574301,-0.854800823265,
	-0.854519162910,-0.854237593210,-0.853956114133,-0.853674725651,-0.853393427734,
	-0.853112220353,-0.852831103480,-0.852550077083,-0.852269141136,-0.851988295607,
	-0.851707540468,-0.851426875690,-0.851146301243,-0.850865817099,-0.850585423227,
	-0.850305119599,-0.850024906186,-0.849744782958,-0.849464749887,-0.849184806943,
	-0.848904954096,-0.848625191319,-0.848345518581,-0.848065935854,-0.847786443109,
	-0.847507040316,-0.847227727446,-0.846948504470,-0.846669371360,-0.846390328086,
	-0.846111374618,-0.845832510929,-0.845553736989,-0.845275052769,-0.844996458239,
	-0.844717953372,-0.844439538138,-0.844161212507,-0.843882976452,-0.843604829942,
	-0.843326772950,-0.843048805446,-0.842770927401,-0.842493138786,-0.842215439572,
	-0.841937829731,-0.841660309233,-0.841382878050,-0.841105536153,-0.840828283513,
	-0.840551120100,-0.840274045887,-0.839997060844,-0.839720164942,-0.839443358153,
	-0.839166640448,-0.838890011797,-0.838613472173,-0.838337021547,-0.838060659888,
	-0.837784387170,-0.837508203363,-0.837232108438,-0.836956102367,-0.836680185120,
	-0.836404356670,-0.836128616987,-0.835852966042,-0.835577403808,-0.835301930255,
	-0.835026545354,-0.834751249077,-0.834476041396,-0.834200922281,-0.833925891704,
	-0.833650949637,-0.833376096050,-0.833101330916,-0.832826654204,-0.832552065888,
	-0.832277565938,-0.832003154326,-0.831728831022,-0.831454596000,-0.831180449229,
	-0.830906390682,-0.830632420330,-0.830358538144,-0.830084744096,-0.829811038158,
	-0.829537420300,-0.829263890495,-0.828990448714,-0.828717094928,-0.828443829110,
	-0.828170651230,-0.827897561259,-0.827624559171,-0.827351644936,-0.827078818526,
	-0.826806079912,-0.826533429066,-0.826260865960,-0.825988390565,-0.825716002853,
	-0.825443702795,-0.825171490364,-0.824899365530,-0.824627328266,-0.824355378544,
	-0.824083516334,-0.823811741609,-0.823540054339,-0.823268454498,-0.822996942057,
	-0.822725516987,-0.822454179260,-0.822182928849,-0.821911765723,-0.821640689857,
	-0.821369701220,-0.821098799786,-0.820827985525,-0.820557258410,-0.820286618413,
	-0.820016065504,-0.819745599657,-0.819475220843,-0.819204929033,-0.818934724200,
	-0.818664606316,-0.818394575352,-0.818124631280,-0.817854774072,-0.817585003701,
	-0.817315320137,-0.817045723354,-0.816776213322,-0.816506790014,-0.816237453401,
	-0.815968203457,-0.815699040152,-0.815429963458,-0.815160973348,-0.814892069794,
	-0.814623252767,-0.814354522240,-0.814085878185,-0.813817320573,-0.813548849377,
	-0.813280464569,-0.813012166121,-0.812743954004,-0.812475828192,-0.812207788655,
	-0.811939835367,-0.811671968298,-0.811404187423,-0.811136492711,-0.810868884137,
	-0.810601361671,-0.810333925286,-0.810066574954
	}
};

double always_inline s03_stage3_negclip(double x) {
    double f = fabs(x);
    f = f * s03_stage3_neg_table.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = s03_stage3_neg_table.data[0];
    } else if (i >= s03_stage3_neg_table.size-1) {
        f = s03_stage3_neg_table.data[s03_stage3_neg_table.size-1];
    } else {
        f -= i;
        f = s03_stage3_neg_table.data[i]*(1-f) + s03_stage3_neg_table.data[i+1]*f;
    }
    return copysign(f, x);
}


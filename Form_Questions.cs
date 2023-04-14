using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Tema1
{
    public partial class Form_Questions : Form
    {
        private int questionIndex;
        private int correctAnswers;
        private List<Question> questions;
        public Form_Questions(int index, string domeniu)
        {
            InitializeComponent();
            InitQuestions(index, domeniu);
            InitControls();
        }
        private void InitQuestions(int indice, string domeniu)
        {
            questions = new List<Question>();
            switch (indice)
            {
                case 0:
                    questions.Add(new Question("1. Cine a pictat celebrul tablou " +
                        "\"Cina cea de taină\"?", new List<string> { "Michelangelo", 
                            "Leonardo da Vinci", "Nicolae Grigorescu", "Pablo Picasso" }, 
                            "Leonardo da Vinci"));
                    questions.Add(new Question("2. Care este piața considerată centrul Moscovei " +
                        "și al Rusiei?", new List<string> { "Piata Eroilor", "Piața Unirii", 
                            "Piața Roșie", "Piața Revoluției" }, "Piața Roșie"));
                    questions.Add(new Question("3. Unde se află pictura \"Gioconda\" a lui " +
                        "Leonardo da Vinci?", new List<string> { "Muzeul Rodin", 
                            "Muzeul Georges Pompidou", "Muzeul Orsay", "Muzeul Luvru" }, 
                            "Muzeul Luvru"));
                    questions.Add(new Question("4. Care a fost reşedinţa Regelui Ferdinand I al" +
                        " României şi al Reginei Maria?", new List<string> { "Castelul Peleș",
                            "Castelul Corvinilor", "Castelul Bran", "Castelul Bánffy" }, 
                            "Castelul Peles"));
                    questions.Add(new Question("5. Cine a pictat tavanul Capelei Sixtine?", 
                        new List<string> { "Leonardo da Vinci", "Rafael", 
                            "Michelangelo Buonarroti", "Donatello" }, "Michelangelo Buonarroti"));
                    label_title.Text = "Întrebări din " + domeniu;
                    break;
                case 1:
                    questions.Add(new Question("1. Câți ani a durat războiul de 100 de ani?", 
                        new List<string> { "100 ani", "116 ani", "95 ani", "130 ani" }, "116 ani"));
                    questions.Add(new Question("2. Ce președinte sovietic a înființat Glasnost " +
                        "și Perestroika?", new List<string> { "Vladimir Lenin", "Nikita Hrușciov",
                            "Iosif Stalin", "Mihail Gorbaciov" }, "Mihail Gorbaciov"));
                    questions.Add(new Question("3. Cine a fost primul om care a mers pe Lună?", 
                        new List<string> { "Louis Armstrong", "Dumitru Prunariu", "Neil Armstrong",
                            "Ion Iliescu" }, "Neil Armstrong"));
                    questions.Add(new Question("4. Cine a înfăptuit prima unire a Principatelor " +
                        "Române?", new List<string> { "Mircea cel Bătrân", "Mihai Viteazul", 
                            "Alexandru Ioan Cuza", "Ștefan cel Mare" }, "Mihai Viteazul"));
                    questions.Add(new Question("5. Ce grad de rudenie este între Carol al-II-lea " +
                        "și Ferdinand I?", new List<string> { "Carol al-II-lea este vărul " +
                        "lui Ferdinand I", "Ferdinand I este fratele lui Carol al-II-lea", 
                            "Ferdinand I este tatăl lui Carol al-II-lea", "Carol al-II-lea " +
                            "este cumnatul lui Ferdinand I" }, "Ferdinand I este tatăl lui " +
                            "Carol al-II-lea"));
                    label_title.Text = "Întrebări din " + domeniu;
                    break;
                case 2:
                    questions.Add(new Question("1. Prima gimnastă din lume care a primit nota 10 " +
                        "într-un concurs olimpic de gimnastică:", new List<string> 
                        { "Elena Leuștean", "Simone Biles", "Nadia Comăneci", "Emilia Eberle" },
                        "Nadia Comăneci"));
                    questions.Add(new Question("2. Câți pași are voie jucătorul de handball " +
                        "să se deplaseze cu mingea în mână?", new List<string> { "3 pași", 
                            "2 pași", "4 pași", "5 pași" }, "3 pași"));
                    questions.Add(new Question("3. Care este lungimea unui bazin de înot" +
                        " olimpic?", new List<string> { "60 metri", "50 metri", "100 metri",
                            "40 metri" }, "50 metri"));
                    questions.Add(new Question("4. Club de fotbal din Italia poreclit şi" +
                        " \"bătrâna doamnă\"?", new List<string> { "AS Roma",
                            "Juventus Football Club", "AC Milan", 
                            "Football Club Internazionale Milano" }, "Juventus Football Club"));
                    questions.Add(new Question("5. Care este jocul sportiv tradiţional " +
                        "românesc?", new List<string> { "Baschet", "Fotbal", "Tenis de masă",
                            "Oina" }, "Oina"));
                    label_title.Text = "Întrebări din " + domeniu;
                    break;
                case 3:
                    questions.Add(new Question("1. Din ce țară izvorăște Dunărea?", 
                        new List<string> { "Polonia", "Germania", "România", 
                            "Austria" }, "Germania"));
                    questions.Add(new Question("2. Care este cel mai mare arhipelag al " +
                        "Terrei (peste 17000 insule)?", new List<string> { "Indonezia",
                            "Filipine", "Japonia", "Bahamas" }, "Indonezia"));
                    questions.Add(new Question("3. Cum se numește mişcarea pe care o face " +
                        "Pământul în jurul Soarelui?", new List<string> 
                        { "Mişcare retrogradă", "Mişcare de rotaţie", "Mişcare de revoluţie",
                            "Mişcare de spin" }, "Mişcare de revoluţie"));
                    questions.Add(new Question("4. Care este cel mai lung fluviu din Europa?",
                        new List<string> { "Rin", "Sena", "Tamisa", "Volga" }, "Volga"));
                    questions.Add(new Question("5. Cum se numește gura de vărsare a unor fluvii " +
                        "în formă de pâlnie?", new List<string> { "Estuar", "Lagună", "Golf",
                            "Deltă" }, "Estuar"));
                    label_title.Text = "Întrebări din " + domeniu;
                    break;
                case 4:
                    questions.Add(new Question("1. Cum se numește știința care studiază limba " +
                        "și legile ei?", new List<string> { "Gramatica", "Lingvistica", 
                            "Literatura", "Filologia" }, "Lingvistica"));
                    questions.Add(new Question("2. Cum se numește știinţa care studiază " +
                        "manifestarea elementelor atmosferice?", new List<string> 
                        { "Meteorologia", "Metrologia", "Hidrologia", "Topologia" }, 
                        "Meteorologia"));
                    questions.Add(new Question("3. Cum se numește știinţa care studiază regulile " +
                        "de scriere corectă?", new List<string> { "Ortoepia", "Caligrafia", 
                            "Punctuația", "Ortografia" }, "Ortografia"));
                    questions.Add(new Question("4. Cum se numește știinţa care studiază " +
                        "ereditatea şi variabilitatea organismelor?", new List<string> 
                        { "Biochimia", "Ecologia", "Genetica", "Paleontologia" }, "Genetica"));
                    questions.Add(new Question("5. Cum se numește știinţa care se ocupă cu" +
                        " studiul organismelor și al fosilelor?", new List<string>
                        { "Filologia", "Paleontologia", "Fiziologia", "Paleologia" },
                        "Paleontologia"));
                    label_title.Text = "Întrebări din " + domeniu;
                    break;
            }
        }
        private void InitControls()
        {
            questionIndex = 0;
            correctAnswers = 0;
            progressBar1.Minimum = 0;
            progressBar1.Maximum = 100;
            progressBar1.Value = 0;
            label_percent.Text = "0 %";
            DisplayQuestion();
        }

        private void DisplayQuestion()
        {
            Question question = questions[questionIndex];
            groupBox1.Text = question.Text;
            radioButton1.Text = question.Answers[0];
            radioButton2.Text = question.Answers[1];
            radioButton3.Text = question.Answers[2];
            radioButton4.Text = question.Answers[3];
            radioButton1.Checked = false;
            radioButton2.Checked = false;
            radioButton3.Checked = false;
            radioButton4.Checked = false;
            button_next.Enabled = false;
        }
        private void CheckAnswer()
        {
            Question question = questions[questionIndex];
            string selectedAnswer = "";
            foreach (Control control in this.groupBox1.Controls)
            {
                if (control is RadioButton)
                {
                    RadioButton radio = control as RadioButton;
                    if (radio.Checked)
                    {
                        selectedAnswer = radio.Text;
                    }
                }
            }
            if (selectedAnswer == question.CorrectAnswer)
            {
                correctAnswers++;
            }
            progressBar1.Value = correctAnswers * 100 / questions.Count;
            label_percent.Text = Convert.ToString(progressBar1.Value) + " %";
        }

        private void button_next_Click(object sender, EventArgs e)
        {
            CheckAnswer();
            questionIndex++;
            if (questionIndex == questions.Count)
            {
                MessageBox.Show("Quiz terminat! Ai raspuns corect la " +
                    correctAnswers + " intrebari din " + questions.Count 
                    + "." + Environment.NewLine + "Procentajul de raspunsuri " +
                    "corecte este de: " + progressBar1.Value + "%.", "Rezultat quiz");
                InitControls();
            }
            else
            {
                DisplayQuestion();
            }
        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {
            button_next.Enabled = true;
        }

        private void button_exit_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }

    public class Question
    {
        public string Text;
        public List<string> Answers;
        public string CorrectAnswer;

        public Question(string text, List<string> answers, string correctAnswer)
        {
            Text = text;
            Answers = answers;
            CorrectAnswer = correctAnswer;
        }
    }
}
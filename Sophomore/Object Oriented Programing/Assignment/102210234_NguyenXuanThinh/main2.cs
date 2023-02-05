
// Viết chương trình này bằng ngôn ngữ C#
//  Viết ứng dụng quản lý có menu thực hiện các phương thức trong lớp List.
//           Khai báo lớp List: gồm 1 con trỏ trỏ về mảng các đối tượng
//           Lớp Date : ngày tháng năm
//           Lớp Nhân Viên:
//             - Mã nhân viên(string hoặc char*) ít nhất 8 ký tự
//             - Tên nhân viên
//             - Ngày nhận vào làm việc
//             - Giới tính (true - nữ) (false - nam)
//             - Lương (double)
//         Hiển thị danh sách đối tượng;

//         - Thêm đối tượng (đầu mảng, cuối mảng & vị trí k bất kỳ),

//         - Cập nhật thông tin đối tượng.

//         - Xóa đối tượng (đầu mảng, cuối mảng & vị trí k bất kỳ);
//         - Tìm kiếm đối tượng theo một thuộc tính bất kỳ sử dụng thuật toán tìm kiếm binary search
//         - Sắp xếp mảng các đối tượng theo một thuộc tính bất kỳ sử dụng thuật toán shell sort, sử dụng con trỏ hàm để có thể sắp xếp tăng dần hoặc giảm dần.

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _102210234_NguyenXuanThinh
{
    class Program
    {
        static void Main(string[] args)
        {
            List list = new List();
            int choice;
            do
            {
                Console.WriteLine(" 1. Them dau danh sach "
                                + " 2. Them cuoi danh sach "
                                + " 3. Them tai vi tri bat ky "
                                + " 4. Cap nhat thong tin "
                                + " 5. Xoa dau danh sach "
                                + " 6. Xoa cuoi danh sach "
                                + " 7. Xoa tai vi tri bat ky "
                                + " 8. Tim kiem "
                                + " 9. Sap xep tang theo ma nhan vien "
                                + " 10. Sap xep giam theo ma nhan vien "
                                + " 11. Sap xep tang theo ten nhan vien "
                                + " 12. Sap xep giam theo ten nhan vien "
                                + " 13. Sap xep tang theo ngay nhan viec "
                                + " 14. Hien thi danh sach "
                                + " 0. Thoat "
                                );
                Console.Write("Nhap lua chon: ");
                choice = int.Parse(Console.ReadLine());
                switch (choice)
                {
                    case 1:
                        list.AddHead();
                        break;
                    case 2:
                        list.AddTail();
                        break;
                    case 3:
                        list.AddAt();
                        break;
                    case 4:
                        list.Update();
                        break;
                    case 5:
                        list.DeleteHead();
                        break;
                    case 6:
                        list.DeleteTail();
                        break;
                    case 7:
                        list.DeleteAt();
                        break;
                    case 8:
                        list.Search();
                        break;
                    case 9:
                        list.Sort(1);
                        break;
                    case 10:
                        list.Sort(2);
                        break;
                    case 11:
                        list.Sort(3);
                        break;
                    case 12:
                        list.Sort(4);
                        break;
                    case 13:
                        list.Sort(5);
                        break;
                    case 14:
                        list.Display();
                        break;
                    case 0:
                        break;
                    default:
                        Console.WriteLine("Lua chon khong hop le!");
                        break;
                }
            } while (choice != 0);
        }
    }

    class List
    {
        private int n;
        private Employee[] list;

        public List()
        {
            n = 0;
            list = new Employee[100];
        }

        public void AddHead()
        {
            Console.WriteLine("Nhap thong tin nhan vien can them: ");
            Employee e = new Employee();
            e.Input();
            for (int i = n; i > 0; i--)
            {
                list[i] = list[i - 1];
            }
            list[0] = e;
            n++;
        }

        public void AddTail()
        {
            Console.WriteLine("Nhap thong tin nhan vien can them: ");
            Employee e = new Employee();
            e.Input();
            list[n] = e;
            n++;
        }

        public void AddAt()
        {
            Console.Write("Nhap vi tri can them: ");
            int pos = int.Parse(Console.ReadLine());
            if (pos < 0 || pos > n)
            {
                Console.WriteLine("Vi tri khong hop le!");
                return;
            }
            Console.WriteLine("Nhap thong tin nhan vien can them: ");
            Employee e = new Employee();
            e.Input();
            for (int i = n; i > pos; i--)
            {
                list[i] = list[i - 1];
            }
            list[pos] = e;
            n++;
        }

        public void Update()
        {
            Console.Write("Nhap vi tri can cap nhat: ");
            int pos = int.Parse(Console.ReadLine());
            if (pos < 0 || pos >= n)
            {
                Console.WriteLine("Vi tri khong hop le!");
                return;
            }
            Console.WriteLine("Nhap thong tin nhan vien can cap nhat: ");
            list[pos].Input();
        }

        public void DeleteHead()
        {
            if (n == 0)
            {
                Console.WriteLine("Danh sach rong!");
                return;
            }
            for (int i = 0; i < n - 1; i++)
            {
                list[i] = list[i + 1];
            }
            n--;
        }

        public void DeleteTail()
        {
            if (n == 0)
            {
                Console.WriteLine("Danh sach rong!");
                return;
            }
            n--;
        }

        public void DeleteAt()
        {
            Console.Write("Nhap vi tri can xoa: ");
            int pos = int.Parse(Console.ReadLine());
            if (pos < 0 || pos >= n)
            {
                Console.WriteLine("Vi tri khong hop le!");
                return;
            }
            for (int i = pos; i < n - 1; i++)
            {
                list[i] = list[i + 1];
            }
            n--;
        }

    }
    class Employee
    {
        private string id;
        private string name;
        private DateTime date;

        public Employee() { }

        public Employee(string id, string name, DateTime date)
        {
            this.id = id;
            this.name = name;
            this.date = date;
        }

        public string ID
        {
            get
            {
                return id;
            }
            set
            {
                id = value;
            }
        }

        public string Name
        {
            get
            {
                return name;
            }
            set
            {
                name = value;
            }
        }

        public DateTime Date
        {
            get
            {
                return date;
            }
            set
            {
                date = value;
            }
        }

        public void Input()
        {
            Console.Write("Nhap ma nhan vien: ");
            id = Console.ReadLine();
            Console.Write("Nhap ten nhan vien: ");
            name = Console.ReadLine();
            Console.Write("Nhap ngay nhan viec (dd/MM/yyyy): ");
            date = DateTime.ParseExact(Console.ReadLine(), "dd/MM/yyyy", CultureInfo.InvariantCulture);
        }

        public void Output()
        {
            Console.WriteLine("Ma nhan vien: " + id);
            Console.WriteLine("Ten nhan vien: " + name);
            Console.WriteLine("Ngay nhan viec: " + date.ToString("dd/MM/yyyy"));
        }

        public int CompareByID(Employee other)
        {
            return this.id.CompareTo(other.id);
        }

        public int CompareByName(Employee other)
        {
            return this.name.CompareTo(other.name);
        }

        public int CompareByDate(Employee other)
        {
            return this.date.CompareTo(other.date);
        }
    }
    class Date
    {
        private int day;
        private int month;
        private int year;

        public Date()
        {
            day = 1;
            month = 1;
            year = 2000;
        }

        public Date(int day, int month, int year)
        {
            this.day = day;
            this.month = month;
            this.year = year;
        }

        public void Input()
        {
            Console.Write("Nhap ngay: ");
            day = int.Parse(Console.ReadLine());
            Console.Write("Nhap thang: ");
            month = int.Parse(Console.ReadLine());
            Console.Write("Nhap nam: ");
            year = int.Parse(Console.ReadLine());
        }

        public void Output()
        {
            Console.WriteLine("Ngay: " + day);
            Console.WriteLine("Thang: " + month);
            Console.WriteLine("Nam: " + year);
        }
    }
}




















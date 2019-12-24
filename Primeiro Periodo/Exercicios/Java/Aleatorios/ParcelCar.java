package DevDojo;

public class ParcelCar {
    public static void main(String[] args) {
        double carValue = 30000;
        for (int parcel = 1; parcel <= carValue; parcel++) {
            double parcelValue = carValue / parcel;
            if (parcelValue < 1000) {
                break;
            } else {
                System.out.println("Parcel " + parcel + " R$" + parcelValue);
            }
        }
    }
}